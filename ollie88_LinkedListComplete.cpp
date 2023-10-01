#include<iostream>
using namespace std;
// LINKED-LIST traversal , insertion , deletion and searching. 
struct Node
{
    int data;
    struct Node* next;
};

void linkedlisttraversal(struct Node* ptr)
{
    if(ptr == NULL)
    {
        cout<<"List is empty"<<endl;
    }

    else
    {
       while(ptr!=NULL)
       {
           cout<<ptr->data<<endl;
           ptr = ptr->next;
       }
    }
}

void SearchList(struct Node* ptr)
{
    bool check = false;
    int position = 0;
    int key;
    cout<<"Enter item to be searched: ";
    cin>>key;
    while(ptr!=NULL)
    {
        position++;
        if(ptr->data == key)
        {
            check = true;
            cout<<"Item found at node "<<position<<endl;
            return;
        }
        else
        {
          ptr = ptr->next;
        }
    }

    if(check == false)
    {
        cout<<"No such item in the list"<<endl;
    }

}

void insertatbegining(struct Node** head , int val)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = *head;
    *head = newnode;
}

void insertatend(struct Node* p , int val)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = newnode;
    newnode->data = val;
    newnode->next = NULL;
}

void insertinbetween(struct Node* tpr , int val , int pos)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    for(int i = 1 ; i<pos-1 ; ++i)
    {
        tpr = tpr->next;
    }

    newnode->next = tpr->next;
    tpr->next = newnode;
    newnode->data = val;
}

void deleteatend(struct Node* ptr)
{
    while((ptr->next)->next != NULL)
    {
        ptr = ptr->next;
    }

    struct Node* p = ptr->next;
    ptr->next = NULL;
    free(p);
}

void deleteatbegining(struct Node* &head)
{
    struct Node* p = head;
    head = head->next;
    free(p);
}

void deleteinbetween(struct Node* ptr , int pos)
{
    for(int i = 1 ; i<pos-1 ; ++i)
    {
        ptr = ptr->next;
    }

    struct Node* p = ptr->next;
    ptr->next = (ptr->next)->next;
    free(p);
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 11;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 15;
    third->next = NULL;

     cout<<"Printing the original linked-list: "<<endl;

     linkedlisttraversal(head);

    cout<<endl;

    insertatbegining(&head , 10);

    cout<<"Inserting 10 at the beginning:"<<endl;

    linkedlisttraversal(head);

    cout<<endl;

    insertatend(head , 17);

    cout<<"Inserting 17 at the end: "<<endl;

    linkedlisttraversal(head);

    cout<<endl;

    insertinbetween(head , 16 , 5);

    cout<<"Inserting 16 at fifth position from start: "<<endl;

    linkedlisttraversal(head);

    cout<<endl;

    deleteatend(head);

    cout<<"Deleting the last node: "<<endl;

    linkedlisttraversal(head);

    cout<<endl;

    deleteatbegining(head);

    cout<<"Deleting the first node: "<<endl;

    linkedlisttraversal(head);

    cout<<endl;

    deleteinbetween(head , 3);

    cout<<"Deleting the third node from start: "<<endl;

    linkedlisttraversal(head);

    cout<<endl;

    SearchList(head);

    cout<<endl;

    return 0;
}