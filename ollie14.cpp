#include<iostream>
using namespace std;
int main()
{
    char shit = 'w';
    int x = 119;
    cout<<x+shit<<endl;  // THIS IS CALLED IMPLICIT TYPE-CASTING OR AUTOMATIC TYPE-CASTING.
    int y = int(shit);
    cout<<y<<endl;
    int z = shit;
    cout<<z<<endl;
    // char ass = x;
    // cout<<ass<<endl;
    char bitch = char(x); // THIS IS CALLED EXPLICIT TYPE-CASTING OR USER-DEFINED TYPE-CASTING.
    cout<<bitch<<endl;
    return 0;
}