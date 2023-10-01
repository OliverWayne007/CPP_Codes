#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:

    Node* right;
    Node* left;
    int data;

    Node(int d)
    {
        this -> left = NULL;
        this -> right = NULL;
        this -> data = d;
    }
};

Node* CreateBinaryTree(Node* root)
{
    int d;
    cin >> d;
    if(d == -1)
    {
        return root;
    }
    root = new Node(d);
    root -> right = CreateBinaryTree(root -> right);
    root -> left = CreateBinaryTree(root -> left);
    return root;
}

void PreOrderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root -> data << " ";
    PreOrderTraversal(root -> left);
    PreOrderTraversal(root -> right);
}

void PostOrderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    PostOrderTraversal(root -> left);
    PostOrderTraversal(root -> right);
    cout << root -> data << " ";
}

void InOrderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    InOrderTraversal(root -> left);
    cout << root -> data << " ";
    InOrderTraversal(root -> right);
}



int main()
{
    Node* root = NULL;
    root = CreateBinaryTree(root);
    return 0;
}