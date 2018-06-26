#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

void Insert(node* header, int value)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = NULL;
    node* temp = header;
    while(temp->next != NULL)
        {temp = temp->next;}
    new_node->data = value;
    temp->next = new_node;
}
void print(node* header)
{
    node* p;

    //p = header->next;
    while(p->next != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
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
       {
        Insert(header, i);
       }
    print(header);


    cout<<"After reverse the list: ";
    reverse(header);
    return 0;
}
