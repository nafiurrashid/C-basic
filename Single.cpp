#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

void insert(node* header, int value)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = NULL;

    node* temp = header;

    while(temp->next != NULL)
        temp = temp->next;

    new_node->data = value;
    temp->next = new_node;
}
void traversal(node* header)
{
    node* p;
    p = header->next;
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
struct node* find(node* header, int check)
{
    node* i = header;
    while(i->next != NULL && i->data != check)
        i = i->next;
    return i;
}

struct node* findPrevious(node* header, int check)
{
    node* i = header;
    while(i->next != NULL && (i->next)->data != check)
        i = i->next;
    return i;
}
void insertAfter(node* header, int check, int insert_value)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = NULL;

    node* i =find(header, check);
    node* iprev = findPrevious(header, check);

    new_node->data = insert_value;
    new_node->next = i->next;
    (iprev->next)->next = new_node;
}
void deletetion(node* header, int dvalue)
{
    node* i = findPrevious(header, dvalue);
    node* idel = i->next;
    i->next = idel->next;
    delete idel;

}
void reverse(node* header){
    if(header->next == NULL){
        return;
    }
    reverse(header->next);
    node* temp;
    temp = header->next;
     header->next = header;
     header = temp;

     while(header == NULL)
        header = header->next;

     cout<<header->data<<" ";

}



int main()
{
    node* header = (node*)malloc(sizeof(node));
    header->next = NULL;

    cout<<"The list is: ";
    for(int i=0; i<10; i++)
    insert(header, i);
    traversal(header);


    cout<<"After insert a value: ";
    insertAfter(header, 9, 10);
    traversal(header);


    cout<<"After deleted a value: ";
    deletetion(header, 5);
    traversal(header);


    cout<<"After reverse the list: ";
    reverse(header);
    return 0;
}
