#include<iostream>
using namespace std;
// WE ARE ABOUT TO FIND OUT HOW AN INFINITE FOR LOOP WORKS. HOW TO CRAETE AND STOP AN INFINITE FOR LOOP.
int main()
{
    char trash;               // THE NAME ASSIGNED TO ANY VARIABLE SHOULD NOT BE A C++ KEYWORD. 
    for(int i = 1 ; ; i++)
    {
        cout<<"MY NAME IS OLIVER QUEEN"<<endl;
        cin>>trash;

         if(trash=='x')
         {
             cout<<"THE INFINITE FOR LOOP HAS BEEN TERMINATED.";
             break;
         }
    }

    return 0;
}
// SO WE NOTE THAT IF THE RESTRICTING CONDITION IN A FOR LOOP IS ABSENT THEN IT IS UNBOUND AND SO IT RUNS INFINITELY.
// IN ORDER TO TERMINATE AN INFINITE FOR LOOP WE CAN EITHER USE THE BREAK STATEMENT LIKE ABOVE OR WE CAN SIMPLY PRESS Ctrl+C. 