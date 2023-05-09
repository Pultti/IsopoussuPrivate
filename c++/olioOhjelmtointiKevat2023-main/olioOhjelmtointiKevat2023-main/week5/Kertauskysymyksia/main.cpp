#include <iostream>
using namespace std;
/*
 Kertausta:
  1. Tehkääpä se opiskelijakysely (linkkin Zoomin chatissä)
  2. Mikä on this pointteri ja miksi se tarvitaan?
  3. Miten pointteri ja refenssimuuttujat eroavat toisistaan?
  4. Entä miten pointteri ja refenssimuuttuja eroavat normaaleista muuttujista?

 */

 class myClass
 {
 public:
     myClass();
     ~myClass();
     int getMyData();
 private:
    int myData;
 };

 myClass::myClass()
 {
    cout<<"myClass constructor"<<endl;
 }
 myClass::~myClass()
 {
    cout<<"myClass destructor"<<endl;
 }
 int myClass::getMyData()
 {
    this->myData = 4;
    return myData;
 }


 void testi1(myClass object)
 {
    cout<<"data = "<<object.getMyData()<<endl;
 }

 void testi2(myClass * ptr)
 {
    cout<<"data = "<<ptr->getMyData()<<endl;
 }

 void testi3(myClass & ref)
 {
    cout<<"data = "<<ref.getMyData()<<endl;
 }



int main()
{
    myClass olio;
    myClass & referenssi = olio;

    testi3(referenssi);


    return 0;
}

