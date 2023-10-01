#include<iostream>
using namespace std;
// CONSTRUCTING AND IMPLEMENTING A BINARY TREE USING RECURSION !!!
struct BinaryTreeNode
{
   int data;
   struct BinaryTreeNode* right;
   struct BinaryTreeNode* left;
};

struct BinaryTreeNode* createNode()
{
    int x;
    cout<<"Enter the data(-1 for no data): ";
    cin>>x;
    struct BinaryTreeNode* newnode;
    newnode = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
    if(x == -1)
    {
        return NULL;
    }
    else
    {
       newnode->data = x;
       cout<<"Enter the left child of "<<x<<":"<<endl;
       newnode->left = createNode();
       cout<<"Enter the right child of "<<x<<":"<<endl;
       newnode->right = createNode();
    }

    return newnode;
}

int main()
{
   struct BinaryTreeNode* root = NULL;
   root = createNode();
   return 0;
}