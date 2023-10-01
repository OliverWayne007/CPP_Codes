#include<iostream>
using namespace std;

struct person
{
    char name[100];
    int age;               // THESE ARE MEMBER-VARIABLES OF THE STRUCTURE.
    double salary;
};

int main()
{
   person dovi;
   cout<<"Enter the details of the person: "<<endl;
   cout<<"Enter the name of the person: "<<endl;
   cin.getline(dovi.name , 100);
   cout<<"Enter the age of the person: "<<endl;
   cin>>dovi.age;
   cout<<"Enter the salary of the person: "<<endl;
   cin>>dovi.salary;
   return 0;
}