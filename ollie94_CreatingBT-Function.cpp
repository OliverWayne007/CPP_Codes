#include<iostream>
using namespace std;
// Constructing and Implementing Binary Tree using Funtion(without Recursion).
struct BinaryTreeNode
{
    int data;
    struct BinaryTreeNode* right;
    struct BinaryTreeNode* left;
};

struct BinaryTreeNode* createNode(int data)
{
   struct BinaryTreeNode* newnode;
   newnode = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
   newnode->data = data;
   newnode->left = NULL;
   newnode->right = NULL;
   return newnode;
}

int main()
{
   struct BinaryTreeNode* root;
   root = createNode(10);
   struct BinaryTreeNode* p1;
   p1 = createNode(15);
   struct BinaryTreeNode* p2;
   p2 = createNode(20);

   root->left = p1;
   root->right = p2;
   return 0;
}