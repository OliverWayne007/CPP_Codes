#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:

    int roll_no;
    string name;
    string branch;

    public:

    Student()
    {
        this -> name = "Jon Doe";
        this -> roll_no = 20115000;
        this -> branch = "Nil";
        cout << "Hi there !!! Iam a default constructor !!!" << endl;
    }

    Student(string name)
    {
        cout << "Hi there !!! Iam a parameterized constructor with one argument !!!" << endl;
        this -> name = name;
        this -> roll_no = 20115000;
        this -> branch = "Nil";
    }

    Student(string name , int roll_no)
    {
        this -> name = name;
        this -> roll_no = roll_no;
        this -> branch = "Nil";
        cout << "Hi there !!! Iam a parameterized constructor with two arguments !!!" << endl;
    }

    Student(string name , int roll_no , string branch)
    {
        cout << "Hi there !!! Iam a parameterized Constructor with three arguments !!!" << endl;
        this -> name = name;
        this -> roll_no = roll_no;
        this -> branch = branch;
    }

    Student(Student &s)
    {
        cout << "Hi there !!! Iam a copy constructor made by you !!!" << endl;
        this -> name = s.name;
        this -> roll_no = s.roll_no;
        this -> branch = s.branch;
    }

    void set_name(string Name)
    {
        this -> name = Name;
    }

    void set_roll(int r_no)
    {
        this -> roll_no = r_no;
    }

    void set_branch(string Branch)
    {
        this -> branch = Branch;
    }

    void get_details()
    {
        cout << "Student_Name: " << name << endl;
        cout << "Roll_No: " << roll_no << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1("Oliver Queen" , 20115016 , "Arrow");
    s1.set_name("Arpit Singh");
    s1.set_branch("CSE");
    s1.get_details();
    Student s2("Michael Scofield" , 20115016 , "Prison Break");
    s2.get_details();
    Student s3;
    s3.get_details();
    Student s4("Oliver Queen");
    s4.get_details();
    Student s5("Bruce Wayne" , 20115016);
    s5.get_details();
    Student s6(s1);
    s6.get_details();
    s6.set_name("Thomas Shelby");
    s6.set_branch("Peaky Blinders");
    s6.get_details();
    return 0;
}