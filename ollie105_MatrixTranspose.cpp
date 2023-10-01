#include<bits/stdc++.h>
using namespace std;
// PRINTING THE TRANSPOSE OF A MATRIX
void Transpose(vector<vector<int>>& matrix , int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i ; j<n ; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main()
{
    vector<vector<int>> m = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
     for(int i = 0 ; i<m.size() ; i++)
    {
        for(int j = 0 ; j<m[i].size() ; j++)
        {
            cout<<m[i][j]<<" ";
        }

        cout<<endl;
    }
    cout<<endl;
    int n = m.size();
    Transpose(m,n);
    for(int i = 0 ; i<m.size() ; i++)
    {
        for(int j = 0 ; j<m[i].size() ; j++)
        {
            cout<<m[i][j]<<" ";
        }

        cout<<endl;
    }
    cout<<endl;
    for(auto it:m)
    {
        for(auto itr:it)
        {
            cout<<itr<<" ";
        }

        cout<<endl;
    }
    return 0;
}