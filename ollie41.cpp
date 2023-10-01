#include<iostream>
#include<sstream>
using namespace std;
// A THING OR TWO ABOUT STRINGSTREAM.
int main()
{
   string name = "bob";
   int age;
   // age = 32;
   cout<<"Enter the age: ";
   cin>>age;
   stringstream ss;
   ss<<"Name: ";
   ss<<name;
   ss<<" ; Age: ";
   ss<<age;
   string info = ss.str();
   cout<<info<<endl;
   cout<<ss.str()<<endl;
   string s = "Name: "+name+" ; Age: "+"32";
   cout<<s<<endl;
   stringstream st;
   st<<"Name: "<<name<<" ; Age: "<<age;
    string data = st.str();
    cout<<data<<endl;
   return 0;
}