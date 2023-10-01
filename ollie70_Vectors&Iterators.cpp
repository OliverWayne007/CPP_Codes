#include<iostream>
#include<vector>
using namespace std;
// VECTORS AND ITERATORS IN STL.

void printvec(vector<int>v)                              // VECTOR AS A PARAMETER.
{
    cout<<"The size of the vector is: "<<v.size()<<endl;
    cout<<"Printing the elements of the vector: "<<endl;
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"First method for performing input-output operations in vectors !!!"<<endl;
    vector<int> vec = {11 , 13 , 15 , 17 , 19};
    //vec = {11 , 13 , 15 , 17 , 19};
    for(int i = 0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    cout<<"Second method for performing input-output operations in vectors !!!.This time using in-built push_back() function !!!"<<endl;
    vector<int>v;
    v.push_back(11);
    v.push_back(13);
    v.push_back(15);
    v.push_back(17);
    v.push_back(19);
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Third method for performing input-output operations in vectors !!!.This time using iterators !!!"<<endl;
    vector<int> :: iterator it;                 // DECLARATION OF ITERATOR it.
    for(it = v.begin() ; it != v.end() ; it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    cout<<"Fourth method for performing input-output operations in vectors !!!.This time using functions !!!"<<endl;
    vector<int>v1;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        int x;
        cout<<"Enter the value of x: ";
        cin>>x;
        v1.push_back(x);
        
    }

    cout<<endl;

    printvec(v1);

    v1.pop_back();
    printvec(v1);
    cout<<endl;

    vector<int>v2 = v;
    printvec(v);
    printvec(v2);
    v2.push_back(21);
    printvec(v);
    printvec(v2);


    return 0;
}