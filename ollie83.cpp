#include<iostream>
#include<string>
// TUTORIAL ON FILE-HANDLING IN C++.
#include<fstream>
// THIS IS THE HEADER FILE THAT CONTAINS CLASSES LIKE fstreambase , ifstream , ofstream WHICH ARE REQUIRED TO MANIPULATE FILES
// USING C++ PROGRAMS. fstreambase IS THE BASE CLASS AND ifstream , ofstream ARE ITS DERIVED CLASSES.
// ifstream class is used for input stream. It is used to take input from a file or read from a file or extract data from a 
// file to a C++ program.
// IN ORDER TO TAKE INPUT FROM A FILE OR READ FROM A FILE TO A C++ PROGRAM , WE USE AN OBJECT OF THE ifstream CLASS.
// STREAMS ARE BASICALLY FLOW OF DATA.
// ofstream class is used for output stream. It is used display some data in a file or write to a file or insert data to a file
// from a C++ program.
// IN ORDER TO DISPLAY OUTPUT TO A FILE OR WRITE TO A FILE FROM A C++ PROGRAM , WE USE AN OBJECT OF THE ofstream CLASS.
using namespace std;

int main()
{
   ifstream in("SampleText83.txt");   // By doing this we are connecting our file SampleText83.txt to the "in" stream.
   // Since it is an input-stream , the direction of flow of data will be from the concerned file to this c++ program.
   string st1;
   //in>>st1;
   getline(in , st1);
   cout<<st1<<endl;
   ofstream out("SampleText83.txt");  // By doing this we are connecting our file SampleText83.txt to the "out" stream.
   // Since it is an output-stream , the direction of flow of data will be from this c++ program to the concerned file.
   string st2 , st3;
   st2 = "My name is Oliver Queen.";
   st3 = "Iam someone else , Iam something else !!!";
   out<<st2<<endl;
   out<<st3<<endl;
   return 0;
}