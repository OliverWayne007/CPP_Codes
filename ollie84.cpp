#include<iostream>
using namespace std;
// Inheritance in C++.
class Employee
{
    public:
    int id;
    float salary;
    Employee(int empid)
    {
        id = empid;
        salary = 34.0;
    }
    Employee()
    {
        cout<<"The default Employee constructor is called !!!"<<endl;
    }
    void display()
    {
        cout<<"The Employee id is: "<<id<<endl;
        cout<<"The Employee salary is: "<<salary<<endl;
    }
};

class Programmer:public Employee
{
    public:
    Programmer(int proid)
    {
        id = proid;
        salary = 35.0;
    }
    int languagecode = 9;
    void getdata()
    {
        cout<<"The programmer id is: "<<id<<endl;
        cout<<"The programmer salary is: "<<salary<<endl;
    }
};

int main()
{
    Employee emp1(1);
    Programmer skillF(10);
    emp1.display();
    skillF.display();
    cout<<"LanguageCode: "<<skillF.languagecode<<endl;
    skillF.getdata();
    return 0;
}