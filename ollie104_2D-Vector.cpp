#include<bits/stdc++.h>
using namespace std;
// 2D-VECTORS_DECLARATION AND INITIALIZATION.
int main()
{
     //2D-VECTOR HAVING SAME NUMBER OF COLUMNS IN EACH ROW.
    vector<vector<int>>v = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0 ; i<v.size() ; i++)
    {
        for(int j = 0 ; j<v[i].size() ; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

     // 2D-VECTOR WITH DIFFRENT NUMBER OF COLUMNS IN EACH ROW. 
    vector<vector<int>>v1 = {{1,2,3,4,5},{2,3,4,5},{3,4,5},{4,5},{5}};
    for(int i = 0 ; i<v1.size() ; i++)
    {
        for(int j = 0 ; j<v1[i].size() ; j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

     // DECLARING A 2D-VECTOR OF SIZE 3X3 BUT NOT INITIALIZING IT WITH ANY VALUE
    vector<vector<int>>v2(3,vector<int>(3));
    cout<<v2.size()<<endl;
    cout<<v2[0].size()<<endl;
    for(int i = 0 ; i<v2.size() ; i++)
    {
        for(int j = 0 ; j<v2[i].size() ; j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

     // DECLARING A 2D-VECTOR OF SIZE 3X3 AND INITIALIZING IT WITH THE VALUE 16.
    vector<vector<int>>v3(3,vector<int>(3,16));
    cout<<"The number of rows is: "<<v3.size()<<endl;
    cout<<"The number of columns is: "<<v3[0].size()<<endl;
    for(int i = 0 ; i<v3.size() ; i++)
    {
        for(int j = 0 ; j<v3[i].size() ; j++)
        {
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

     // USING push_back() FUNCTION TO CREATE A 2D-VECTOR.
    vector<vector<int> > buff;

    for(int i = 0 ; i < 5 ; i++)
    {
        vector<int> temp; // create an array, don't work directly on buff yet.
        for(int j = 0 ; j < 5 ; j++)
        {
            temp.push_back(j); 
        } 
        buff.push_back(temp); // Store the array in the buffer
    }

    for(int i = 0 ; i < buff.size() ; ++i)
    {
        for(int j = 0 ; j < buff[i].size() ; ++j)
        {
            cout << buff[i][j]<<" "; 
        }
        cout << endl;
    }
    cout<<endl;

   
    return 0;
}