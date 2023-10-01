#include<iostream>
using namespace std;
// CONSTRUCTOR TROUBLES !!!.
class Adrian
{
   private:
   int x , y;
   public:
   string Name;
   int Roll;
   string Team;
   // THE FOLLOWING IS A DEFAULT CONSTRUCTOR. DEFAULT CONSTRUCTOR IS A CONSTRUCTOR WHICH DOES NOT TAKE ANY ARGUMENTS. 
   Adrian()
   {
       x = 10;
       y = 20;
   }
   // THE FOLLOWING IS A PARAMETERIZED CONSTRUCTOR.
   Adrian(string name , int roll , string team)
   {
      Name = name;
      Roll = roll;
      Team = team;
   }
   void getdata()
   {
       cout<<"Name: "<<Name<<endl;
       cout<<"Roll: "<<Roll<<endl;
       cout<<"Team: "<<Team<<endl;
   }
   void getX()
   {
       cout<<"The value of x is: "<<x<<endl;
   }
   void getY()
   {
       cout<<"The value of y is: "<<y<<endl;
   }
};

int main()
{
   
    Adrian prometheus;                // THE DEFAULT CONSTRUCTOR IS CALLED.
    prometheus.getX();
    prometheus.getY();
    prometheus = Adrian("Ricardo Diaz" , 67 , "Arrow");   // THE PARAMETRIZED CONSTRUCTOR IS CALLED.
    //Adrian prometheus("Ricardo Diaz" , 67 , "Arrow");
    //prometheus("Ricardo Diaz" , 67 , "Arrow");
    //Adrian prometheus = Adrian("Ricardo Diaz" , 67 , "Arrow");
    prometheus.getdata();
    return 0;
}