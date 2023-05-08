#include "dllwithdraw.h"
#include "ui_dllwithdraw.h"

QByteArray nwa;

DLLwithdraw::DLLwithdraw(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DLLwithdraw)
{
    ui->setupUi(this);
    this->setWindowTitle("Withdraw");


    //connect all the number buttons to the same slot with findChild
    for (int i = 0; i <= 9; i++)
    {
      //  create the object name for the button dynamically
        QString pushButton = "button" + QString::number(i);
      //   connect the button to the slot
        connect(findChild<QPushButton*>(pushButton), &QPushButton::clicked, this, &DLLwithdraw::numberClicked);
    }
     //Separate hotkeys in the UI 20€-200€
     connect(ui->draw20, &QPushButton::clicked, this, &DLLwithdraw::withdraw20);
     connect(ui->draw40, &QPushButton::clicked, this, &DLLwithdraw::withdraw40);
     connect(ui->draw100, &QPushButton::clicked, this, &DLLwithdraw::withdraw100);
     connect(ui->draw200, &QPushButton::clicked, this, &DLLwithdraw::withdraw200);

    //Connect withdrawButton to wihdrawSlot
    connect(ui->withdrawButton, &QPushButton::clicked, this, &DLLwithdraw::withdraw);
    connect(ui->exitButton, &QPushButton::clicked, this, &DLLwithdraw::close);
    connect(ui->clearButton, &QPushButton::clicked, this, &DLLwithdraw::clearClicked);
    //connect(ui->transferButton, &QPushButton::clicked, this, &DLLwithdraw::transferButtonClicked);

    //Show updated balance
    connect(ui->comboBoxChooseAccount, SIGNAL(currentIndexChanged(int)), this, SLOT(updateBalanceLineEdit(int)));
}

DLLwithdraw::~DLLwithdraw()
{
    delete ui;
    delete dll_withdrawReply;
    delete dll_withdrawManager;
    delete dll_SaldoManager;
    delete dll_SaldoReply;
    delete PushHistoryReply;
    delete PushHistoryManager;
    delete withdrawManager;
    delete withdrawReply;
    delete transferManager;
    delete transferReply;
}


void DLLwithdraw::getRestApiData(QByteArray token)
{
    nwa = token;
    qDebug()<<"nwa"<<nwa;
    qDebug()<<"withdraw token"<<token;
    QByteArray withdrawToken = token;

    QString site_url="http://localhost:3000/account/1";
    qDebug() << "withdraw/getAll= " + site_url;
    QNetworkRequest request_getAll((site_url));
    request_getAll.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray wToken="Bearer " + withdrawToken;
    request_getAll.setRawHeader(QByteArray("Authorization"),(wToken));
    dll_withdrawManager = new QNetworkAccessManager(this);
    connect(dll_withdrawManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(CurrentBalance(QNetworkReply*)));
    dll_withdrawReply = dll_withdrawManager->get(request_getAll);

    //Set Date here again so it is visible
    QDateTime datetime1 = QDateTime::currentDateTime();
    ui->clockLabel->setText(datetime1.toString("yyyy-MM-dd"));

}


//Balance
void DLLwithdraw::CurrentBalance(QNetworkReply *reply)
{
    qDebug()<<"token global"<<nwa;
     response_data=reply->readAll();          //read what the address responds to
            qDebug()<<"Show balance responsedata" + response_data;
            //There will be the same data on the console as in postman
            if(response_data.compare("-4078")==0 || response_data.compare("")==0){
                //error comparison when postman gives an error and if that data matches in this console if same error then print error signal
                ui->errorLabel->setText("Error in database connection");
            }
            else{   //if data pull succesful..
                QJsonDocument json_doc=QJsonDocument::fromJson(response_data);  //Muutetaan data JsonDocumentiksi
                QJsonObject json_object=json_doc.object();          //Ja vielä kerran muutetaan Json Arrayksi tuo aiempi koska tulee monta objektia eikä vain yksi
                debitSaldo=QString::number(json_object["DebitBalance"].toInt());
                creditSaldo=QString::number(json_object["CreditBalance"].toInt());
                accountNumber=QString::number(json_object["AccountNumber"].toInt());
                idAccount=QString::number(json_object["idAccount"].toInt());

                ui->debitNumberLine->setText(accountNumber);
                ui->creditBalanceLine->setText(creditSaldo + "€");
                ui->debitBalanceLine->setText(debitSaldo + "€");
                ui->idAccountLabel->setText(idAccount);

                qDebug()<< "currentbalance end debitbalance"<<debitSaldo;
                qDebug()<<"currentbalance end creditBalance"<<creditSaldo;
            }
}


//This will display debit and credit account, from which the withdrawal will be made in comboBox
void DLLwithdraw::updateBalanceLineEdit(int index)
{
   if(index == 1) // Credit Balance
   {
       ui->creditBalanceLine->setEnabled(true);
       ui->debitBalanceLine->setEnabled(false);

       accountNumberF();
       creditBalanceF();
       debitBalanceF();
   }
   else if(index == 2) //debit balance
   {
       ui->creditBalanceLine->setEnabled(false);
       ui->debitBalanceLine->setEnabled(true);

       accountNumberF();
       debitBalanceF();
       creditBalanceF();
   }
   else if(index == 3) //Transfer debit to credit
   {
       ui->creditBalanceLine->setEnabled(true);
       ui->debitBalanceLine->setEnabled(true);

       accountNumberF();
       debitBalanceF();
       creditBalanceF();
   }
   else if(index == 4) //Transfer credit to debit
{
       ui->creditBalanceLine->setEnabled(true);
       ui->debitBalanceLine->setEnabled(true);

       accountNumberF();
       debitBalanceF();
       creditBalanceF();
   }
}

void DLLwithdraw::withdraw()
{
    // Get the withdrawal amount from the withdrawalLineEdit
    QString withdrawalStr = ui->withdrawalLineEdit->text();
    bool ok;
    int withdrawal = withdrawalStr.toInt(&ok);

    if(ui->comboBoxChooseAccount->currentIndex() == 0)
       {
           QMessageBox::warning(this, "No account selected", "Please select an account.");
           return;
       }

    // Validate the withdrawal amount
    if (!ok || withdrawal <= 0)
    {
        // Error if the input is not a valid withdrawal amount
        QMessageBox::warning(this, "Invalid withdrawal amount", "Please enter a valid withdrawal amount.");
        return;
    }

    if (withdrawal % 20 != 0 && withdrawal % 50 != 0 && withdrawal % 100 != 0 && withdrawal % 200 != 0 && withdrawal % 500 != 0)
    {
        // Error if the withdrawal amount is not divisible by 20, 50, 100, 200 or 500
        QMessageBox::warning(this, "Invalid withdrawal amount", "Please enter a withdrawal amount that is divisible by 20, 50, 100, 200 or 500.");
        return;
    }

    if (ui->comboBoxChooseAccount->currentIndex() == 1) // Credit Balance
    {
        int creditBalance = ui->creditBalanceLine->text().toInt();  //
        int debitBalance = ui->debitBalanceLine->text().toInt();
        int accountNumber = ui->debitNumberLine->text().toInt();   //
        if (withdrawal > creditBalance)
        {
            // Error if the withdrawal amount is greater than the credit balance
            QMessageBox::warning(this, "Insufficient funds", "You do not have enough funds to withdraw that amount.");
            return;
        }
        creditBalance -= withdrawal;

        ui->debitBalanceLine->setText(QString::number(debitBalance));
        ui->creditBalanceLine->setText(QString::number(creditBalance));
        ui->debitNumberLine->setText(QString::number(accountNumber));
        qDebug()<<"withdraw end creditbalance"<<creditBalance;

        QMessageBox::warning(this, "Withdrawal successful", QString("You have withdrawn %1 from your Credit account.").arg(withdrawal));


        SendBalance();
        SendHistory();
        qDebug()<<"Bug1?";

    }
    else if (ui->comboBoxChooseAccount->currentIndex() == 2) // Debit Balance
    {
        int debitBalance = ui->debitBalanceLine->text().toInt();
        int creditBalance = ui->creditBalanceLine->text().toInt();
        int accountNumber = ui->debitNumberLine->text().toInt();

        if (withdrawal > debitBalance)
        {
            // Error if the withdrawal amount is greater than the debit balance
            QMessageBox::warning(this, "Insufficient funds", "You do not have enough funds to withdraw that amount.");
            return;
        }
        debitBalance -= withdrawal;
        ui->debitBalanceLine->setText(QString::number(debitBalance));
        ui->creditBalanceLine->setText(QString::number(creditBalance));
        ui->debitNumberLine->setText(QString::number(accountNumber));

        qDebug()<<"Withdraw end debitbalance"<<debitBalance;
        qDebug()<<"Withdraw end creditBalance"<<creditBalance;
        qDebug()<<"Withdraw end accountnumber"<<accountNumber;

        QMessageBox::warning(this, "Withdrawal successful", QString("You have withdrawn %1 from your Debit account.").arg(withdrawal));


        SendBalance();
        SendHistory();
        qDebug()<<"Bug2?";

    }


    else if (ui->comboBoxChooseAccount->currentIndex() == 3) // Transfer from debit
    {
        int transferAccount = ui->debitBalanceLine->text().toInt();
        int receiveAccount = ui->creditBalanceLine->text().toInt();
        int transferAccountNumber = ui->debitNumberLine->text().toInt();

        if (withdrawal > transferAccount)
        {
            // Error if the withdrawal amount is greater than the debit balance
            QMessageBox::warning(this, "Insufficient funds", "You do not have enough funds to withdraw that amount.");
            return;
        }
            QMessageBox confirmation;
            confirmation.setText(tr("Do you want to proceed?"));
            QAbstractButton *pButtonYes = confirmation.addButton(tr("Yes"), QMessageBox::YesRole);
            confirmation.addButton(tr("No"), QMessageBox::NoRole);
            confirmation.exec();
            if(confirmation.clickedButton() == pButtonYes)
            {
                // Add a calculation here
                int transferDebitBalance = transferAccount - withdrawal;
                int transferCreditBalance = receiveAccount + withdrawal;
                ui->debitBalanceLine->setText(QString::number(transferDebitBalance));
                ui->creditBalanceLine->setText(QString::number(transferCreditBalance));
                ui->debitNumberLine->setText(QString::number(transferAccountNumber));

                QMessageBox::warning(this, "Money Transfer successful", QString("You have transfered %1 from your Debit account to Credit account.").arg(withdrawal));
                transfer();
            }
    }

    else if (ui->comboBoxChooseAccount->currentIndex() == 4) // Transfer from Credit
    {
        int transferAccount = ui->creditBalanceLine->text().toInt();
        int receiveAccount = ui->debitBalanceLine->text().toInt();
        int transferAccountNumber = ui->debitNumberLine->text().toInt();

        if (withdrawal > transferAccount)
        {
            // Error if the withdrawal amount is greater than the debit balance
            QMessageBox::warning(this, "Insufficient funds", "You do not have enough funds to withdraw that amount.");
            return;
        }

        QMessageBox confirmation;
        confirmation.setText(tr("Do you want to proceed?"));
        QAbstractButton *pButtonYes = confirmation.addButton(tr("Yes"), QMessageBox::YesRole);
        confirmation.addButton(tr("No"), QMessageBox::NoRole);
        confirmation.exec();
        if(confirmation.clickedButton() == pButtonYes)
        {
            // Add a calculation here
            int transferCreditBalance = transferAccount - withdrawal;
            int transferDebitBalance = receiveAccount + withdrawal;
            ui->debitBalanceLine->setText(QString::number(transferDebitBalance));
            ui->creditBalanceLine->setText(QString::number(transferCreditBalance));
            ui->debitNumberLine->setText(QString::number(transferAccountNumber));

            QMessageBox::warning(this, "Money Transfer successful", QString("You have transfered %1 from your Credit account to Debit account.").arg(withdrawal));
            transfer();
        }
    }
}

void DLLwithdraw::SendBalance()
{

    //qDebug()<<"sendbalance token?"<<dogen;
    int DebitBalance = ui->debitBalanceLine->text().toInt();
    int CreditBalance = ui->creditBalanceLine->text().toInt();
    int AccountNumber = ui->debitNumberLine->text().toInt();

    qDebug()<<"sendBalancen alussa"<<DebitBalance;
    qDebug()<<"sendBalancen alussa"<<AccountNumber;
    qDebug()<<"sendBalancen alussa"<<CreditBalance;
    qDebug() << "Response data:" << response_data;

    // Create a JSON object containing the account number and debitBalance value.
    QJsonObject json_obj;
    json_obj.insert("AccountNumber", AccountNumber);
    json_obj.insert("DebitBalance", DebitBalance);
    json_obj.insert("CreditBalance", CreditBalance);

    qDebug()<<"send bala"<<nwa;
    QString site_url2="http://localhost:3000/account/1";
    qDebug() << "withdraw/getAll= " + site_url2;
    QNetworkRequest request_getAll2((site_url2));
    request_getAll2.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray wToken2="Bearer " + nwa;
    request_getAll2.setRawHeader(QByteArray("Authorization"),(wToken2));
    withdrawManager = new QNetworkAccessManager(this);
    connect(withdrawManager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(withdrawSlot(QNetworkReply*)));
     withdrawReply = withdrawManager->put(request_getAll2, QJsonDocument(json_obj).toJson());

    qDebug()<<"sendBalancen lopussa"<<DebitBalance;
    qDebug()<<"sendBalancen lopussa"<<CreditBalance;
    qDebug()<<"sendBalancen lopussa"<<AccountNumber;
}

    // QNetworkReply response processing function.
void DLLwithdraw::withdrawSlot(QNetworkReply *reply)
{
    //Read the content of the response and place it in the responseData variable.
    QByteArray response_SendData=reply->readAll();
    if(response_SendData.compare("0") == 0)
    {   // If the answer is "0", set an error message.
        if(response_SendData.compare("-4078")==0 || response_SendData.compare("")==0)
        {
            ui->errorLabel->setText("Error in database connection");
        }
    }
    // Unblock the reply and remove the sender and reply processing functions.
    withdrawReply->deleteLater();
    reply->deleteLater();
    withdrawManager->deleteLater();
}


void DLLwithdraw::accountNumberF()
{
     ui->debitNumberLine->setText(QString(" %1").arg(accountNumber));
}

void DLLwithdraw::creditBalanceF()
{
    ui->creditBalanceLine->setText(QString(" %1").arg(creditSaldo));

}

void DLLwithdraw::debitBalanceF()
{
    ui->debitBalanceLine->setText(QString(" %1").arg(debitSaldo));
}



void DLLwithdraw::withdraw20()
{
       // Set the withdrawal amount to 20
    QString withdrawalAmount = "20";
       // Set the text of the withdrawal line edit to the withdrawal amount
    ui->withdrawalLineEdit->setText(withdrawalAmount);
}

void DLLwithdraw::withdraw40()
{
    QString withdrawalAmount = "40";
    ui->withdrawalLineEdit->setText(withdrawalAmount);
}

void DLLwithdraw::withdraw100()
{
        QString withdrawalAmount = "100";
        ui->withdrawalLineEdit->setText(withdrawalAmount);
}

void DLLwithdraw::withdraw200()
{
        QString withdrawalAmount = "200";
        ui->withdrawalLineEdit->setText(withdrawalAmount);
}

void DLLwithdraw::numberClicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString digit = button->text();
        ui->withdrawalLineEdit->setText(ui->withdrawalLineEdit->text() + digit);
    }
}

void DLLwithdraw::clearClicked()
{
    QString text = ui->withdrawalLineEdit->text();
    text.chop(1);
    ui->withdrawalLineEdit->setText(text);
}

void DLLwithdraw::transfer()
{
    // Capture the account number and amount entered by the user.
    int sendDebit = ui->debitBalanceLine->text().toInt();
    int receiveCredit = ui->creditBalanceLine->text().toInt();
    int transferAccount = ui->debitNumberLine->text().toInt();

    // Create a JSON object containing the amount to be transferred and the accounts.
    QJsonObject json_obj;
    json_obj.insert("AccountNumber", transferAccount);
    json_obj.insert("DebitBalance", sendDebit);
    json_obj.insert("CreditBalance", receiveCredit);

    qDebug()<<"transfer"<<nwa;
    QString site_url3="http://localhost:3000/account/1";
    qDebug() << "trasferin " + site_url3;
    QNetworkRequest request_getAll3((site_url3));
    request_getAll3.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray wToken3="Bearer " + nwa;
    request_getAll3.setRawHeader(QByteArray("Authorization"),(wToken3));
    transferManager = new QNetworkAccessManager(this);
    connect(transferManager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(transferSlot(QNetworkReply*)));
    transferReply = transferManager->put(request_getAll3, QJsonDocument(json_obj).toJson());

    close();
}


void DLLwithdraw::transferSlot(QNetworkReply *reply)
{   // Read the reply message.
    QByteArray response_TransferData=reply->readAll();
    if(response_TransferData.compare("0") == 0)
    {    // Check the content of the response and set an error or transfer failure message.
        if(response_TransferData.compare("-4078")==0 || response_TransferData.compare("")==0)
        {
            ui->errorLabel->setText("Error in database connection");
        }
    }
    transferReply->deleteLater();
    reply->deleteLater();
    transferManager->deleteLater();
}


void DLLwithdraw::SendHistory()
{
    int Amount = ui->withdrawalLineEdit->text().toInt();
    //int historyAccount = ui->idAccountLabel->text().toInt();

    QDateTime datetime = QDateTime::currentDateTime();
    ui->clockLabel->setText(datetime.toString("yyyy-MM-dd"));
    qDebug()<<"show datetime"<<datetime;
    //QString time = ui->clockLabel->text();
    qDebug()<<datetime.toString("yyyy-MM-dd");


    qDebug()<<"Sendhistory start"<<Amount;
   // qDebug()<<"SendHistory Start"<<idNumber;
  //  qDebug()<<"sendHistory start"<<creditBalance;
    qDebug() << "Response data:" << response_data;

    // Create a JSON object containing the account number and debitBalance value.
    QJsonObject json_obj;
     //hox
    json_obj.insert("Date", datetime.toString("yyyy-MM-dd"));
    json_obj.insert("Amount", Amount);
    //json_obj.insert("Account_idAccount", historyAccount);
    qDebug()<<"inserted data"<<Amount;


    // Set the URL to which the HTTP request will be sent.
    QString site_url4="http://localhost:3000/history/add";
    //QString credentials3="netuser:netpass";                //HoxHox, tunnukset normaalisti poistetaan
    QNetworkRequest request4((site_url4));
    // Aseta HTTP-otsikot
    request4.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    //QByteArray data3 = credentials3.toLocal8Bit().toBase64();
    //QString headerData3 = "Basic " + data3;
    QByteArray webToken = "Bearer " + nwa;
    request4.setRawHeader(QByteArray("Authorization"),(webToken));
    // Create a QNetworkAccessManager and connect it to withdrawSlot.
    PushHistoryManager = new QNetworkAccessManager(this);
    connect(PushHistoryManager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(withdrawSlot(QNetworkReply*)));
    // Create a QNetworkReply and send it with the information in the corresponding section.
    PushHistoryReply = PushHistoryManager->post(request4, QJsonDocument(json_obj).toJson());

    qDebug()<<"Pushistory end amount"<<Amount;
    qDebug()<<"PushHistory end idAccount"<<idAccount;

    close();
}


void DLLwithdraw::PushHistorySlot(QNetworkReply *reply)
{

    QByteArray response_HistoryData=reply->readAll();
    if(response_HistoryData.compare("0") == 0)
    {   // If the answer is "0", set an error message.
        if(response_SendData.compare("-4078")==0 || response_HistoryData.compare("")==0)
        {
            ui->errorLabel->setText("Error in database connection");
        }
    }
     // Unblock the reply and remove the sender and reply processing functions.
    PushHistoryReply->deleteLater();
    reply->deleteLater();
    PushHistoryManager->deleteLater();
}


void DLLwithdraw::close()
{
    //this->close(); //close the current window
   // qApp->exit(); //exit the program
    QWidget::close();

}
