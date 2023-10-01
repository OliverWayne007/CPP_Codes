#include<iostream>
using namespace std;
int main()
{
    char fuck = 'f';
    char *p = &fuck;
    cout<<"The size of the character is: "<<sizeof(fuck)<<" byte "<<endl;
    cout<<"The address of fuck is: "<<&fuck<<endl;
    cout<<"The address of fuck is: "<<p<<endl;
    cout<<"The value at the address stored in pointer-variable p is: "<<*p<<endl;
    cout<<p+1<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}