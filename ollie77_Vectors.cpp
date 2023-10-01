#include<iostream>
#include<vector>
using namespace std;
// IMPORTANCE OF USING REFERENCE OF THE VECTOR AS THE PARAMETER IN THE FUNCTION !!!
void printvec(vector<int>v)  // THIS IS CALL BY VALUE. HERE WE ARE NOT USING THE CONCEPT OF REFERENCE VARIABLE.
{
    cout<<"The size of the vector is: "<<v.size()<<endl;
    cout<<"Printing the elements of the vector: "<<endl;
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.push_back(99);

}

void printvect(vector<int>&v)    // THIS IS CALL BY REFERENCE.
{
    cout<<"The size of the vector is: "<<v.size()<<endl;
    cout<<"Printing the elements of the vector: "<<endl;
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.push_back(99);

}

int main()
{
    vector<int>v1 = {11 , 13 , 15 , 17 , 19};
    printvec(v1);
    cout<<endl;
    printvec(v1);
    cout<<endl;
    printvect(v1);
    cout<<endl;
    printvect(v1);
    cout<<endl;
    printvect(v1);
    cout<<endl;
    return 0;
}