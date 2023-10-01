#include<iostream>
using namespace std;
int main()
{
    // Let the set be represented by A.
    // Let n be the cardinality of the set A i.e the total number of elements in the set A.
    int n;
    // Taking the size of the set A as input from the user and storing it in n.
    cout<<"Enter the size of the set: ";
    cin>>n;

    // Creating a matrix(2-D Array) of dimension n x n representing the relation.
    int matrix[n][n];


    // NOTE: In the matrix representation of a relation, all the positions in the matrix corresponding to the ordered-pairs 
    //        present in the relation are initialised with 1 and all the positions corressponding to those ordered-pairs
    //        which are not present in the relation and present in the set A x A, are initialised with 0.


    // Taking the ordered-pairs of the set A x A present in the relation as input from the user.
    cout<<"Enter the elements of the relation matrix: "<<endl;

    bool flag = true;
    for(int i = 0 ; i<n ; i++)
    {
        bool check = true;
        for(int j = 0 ; j<n ; j++)
        {
            cin>>matrix[i][j];     // NOTE: We can either give 0 or 1 as input. All other inputs will be considered invald.
            if(matrix[i][j] != 1 && matrix[i][j] != 0)
            {
                check = false;
                flag = false;
                break;
            }
        }
        if(check == false)
        {
            break;
        }
    }
    if(flag == false)
    {
        cout<<"INVALID INPUT !!!"<<endl;
    }
    else
    {
        cout<<"Following is the user-defined relation matrix entered by the user: "<<endl;
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

        // Checking if all the diagnol elements of the given relation matrix are initialised with 1 or not.
        // If all the diagonal elements are initialised with 1 then we simply print the relation matrix as it is because
        // in this case, the given matrix is the reflexive closure of itself.
        // Else-if all the diagonal elements are not initialised with 1, then we then we make them equal to 1 and
        // then print the new matrix. This new matrix represents the reflecive closure of the given relation matrix.

        int row = 0 , col = 0;
        while(row<=n && col<=n)
        {
            if(matrix[row][col] == 1)
            {
                row++;
                col++;
                continue;
            }
            else
            {
                matrix[row][col] = 1;
                row++;
                col++;
            }
        }

        // Printing the matrix representing the reflexive closure of the given relation matrix.
        cout<<"The matrix representing the reflexive closure of the given relation matrix is: "<<endl;
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
    return 0;
}