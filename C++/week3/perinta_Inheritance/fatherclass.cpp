#include "fatherclass.h"
//FatherClass::FatherClass():familyName("Spede")
FatherClass::FatherClass()
{
    cout<<"FatherClass created"<<endl;
    familyName = "Turhapuro";
    setSkill("c++ programming skill");
}

FatherClass::~FatherClass()
{
    cout<<"FatherClass deleted"<<endl;
}

void FatherClass::showFamilyInfo()
{
    cout << "family name = " << familyName <<endl;
}

string FatherClass::getSkill()
{
    return skill;
}

void FatherClass::setSkill(string s)
{
    skill = s;
}

