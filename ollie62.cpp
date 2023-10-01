#include<iostream>
using namespace std;
// CREATION OF A BINARY TREE !!!
struct Node
{
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* createNode(int data)
{
    struct Node* a = (struct Node*)malloc(sizeof(Node*));
    a->data = data;
    a->right = NULL;
    a->left = NULL;
    return a;
}

int main()
{
    struct Node* root = (struct Node*)malloc(sizeof(Node*));
    root->data = 11;
    root->right = NULL;
    root->left = NULL;
    struct Node* p1 = createNode(13);
    struct Node* p2 = createNode(17);
    root->right = p1;
    root->left = p2;
    return 0;
}