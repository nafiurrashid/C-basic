#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};
node* trailer;

void insert(node* header,int value)
{
    node* new_node = (node*)malloc(sizeof(node));
    node* i= header;

    new_node->data = value;
    new_node-> prev = NULL;
    new_node->next = NULL;


    trailer->next = new_node;
    new_node->prev = trailer;
    trailer = new_node;
}

void traversalForward(node* header)
{
    node* i= header->next;

    while(i->next != NULL)
    {
        cout<<i->data<<" ";
        i = i->next;
    }
      cout<<i->data<<" ";
      cout<<endl;
}

void traversalBackward(node* trailer)
{
    node* i = trailer;

    while(i->prev !=NULL)
    {
        cout<<i->data<<" ";
        i = i->prev;
    }
     cout<<endl;
}

struct node* find(node* header, int check)
{
    node* i= header;
    while(i->next != NULL && i->data != check)
        i = i->next;
    return i;
}

void insertAfter(node* header, int check, int insertValue)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = insertValue;
   node* i = find(header, check);
   new_node->next = i->next;
   i->next->prev = new_node;
   i->next = new_node;
   new_node->prev = i;
}

void deletion(node* header,int check)
{
    node* i = find(header,check);
    if(i->next == NULL)
    {
        i->prev->next = NULL;
        return;
    }
    i->prev->next = i->next;
    i->next->prev = i->prev;
    if(i->next == NULL)
        trailer = i->prev;

}

int main()
{
    node* header = (node*)malloc(sizeof(node));
    header->prev = NULL;
    header->next = NULL;
    trailer = header;

    for(int i=0; i<10; i++)
        insert(header, i);

    cout<<"The list is: ";
    traversalForward(header);
    cout<<"After reverse: ";
    traversalBackward(trailer);

    insertAfter(header,1,11);
    cout<<"After insert: ";
     traversalForward(header);
     cout<<"Insert after reverse: ";
     traversalBackward(trailer);

    deletion(header,8);
    cout<<"After delete: ";
    traversalForward(header);
    cout<<"Delete after reverse: ";
    traversalBackward(trailer);

    return 0;
}

