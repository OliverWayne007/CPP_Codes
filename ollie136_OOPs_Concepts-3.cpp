#include<bits/stdc++.h>
using namespace std;

class Person
{
    protected:

    string Name;
    string Mother_Name;
    string Father_Name;
    int Age;

    public:

    void Set_Name(string name)
    {
        Name = name;
    }

    void Set_Mother_Name(string name)
    {
        Mother_Name = name;
    }

    void Set_Father_Name(string name)
    {
        Father_Name = name;
    }

    void Set_Age(int age)
    {
        Age = age;
    }

};

class Student : public Person
{
    private:

    string School_Name;
    string Roll_No;

    public:

    Student()
    {
        School_Name = "D.P.S Risali";
    }

    void Set_Roll_No(string roll_no)
    {
        Roll_No = roll_no;
    }

    void Get_Student_Details()
    {
        cout << "Name: " << Name << endl;
        cout << "Father_Name: " << Father_Name << endl;
        cout << "Mother_Name: " << Mother_Name << endl;
        cout << "School_Name: " << School_Name << endl;
        cout << "Roll_No: " << Roll_No << endl;
        cout << "Age: " << Age << endl;
    }
};

int main()
{
    Student s1;
    s1.Set_Name("Ankit Singh");
    s1.Set_Father_Name("Sunil Kumar Singh");
    s1.Set_Mother_Name("Aprajita Singh");
    s1.Set_Age(21);
    s1.Set_Roll_No("20115016");
    s1.Get_Student_Details();
    return 0;
}