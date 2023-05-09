#include <QtTest>

// add necessary includes here

class ToDoApp : public QObject
{
    Q_OBJECT

public:
    ToDoApp();
    ~ToDoApp();

private slots:
    void test_case1();

};

ToDoApp::ToDoApp()
{

}

ToDoApp::~ToDoApp()
{

}

void ToDoApp::test_case1()
{

}

QTEST_APPLESS_MAIN(ToDoApp)

#include "tst_todoapp.moc"
