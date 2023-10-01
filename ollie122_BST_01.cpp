#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int d)
    {
        this -> left = NULL;
        this -> right = NULL;
        this -> data = d;
    }
};

Node* InsertIntoBST(Node* root , int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if(d > root -> data)
    {
        root -> right = InsertIntoBST(root->right , d);
    }
    else
    {
        root -> left = InsertIntoBST(root->left , d);
    }
    return root;
}

int main()
{
    Node* root = NULL;
    cout << "Enter the items to be inserted into BST: " << endl;
    int d;
    cin >> d;
    while(d != -1)
    {
        root = InsertIntoBST(root , d);
        cin >> d;
    }
    return 0;
}