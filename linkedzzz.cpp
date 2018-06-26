#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void insert (struct node* head,int x){
    struct node * temp = (struct node*)malloc (sizeof(struct node));
    temp ->data =x;
    temp ->next = NULL;
    if (head !=NULL){
    temp->next=head;
    //printf("%d",head->data);

}
            head =temp;
}

void traverse(struct node* head){
printf("The list is");
if (head !=NULL){
    printf("%d",head->data);
    head =head->next;
}
printf("\n");
}


int main (){
   // struct node* list = (struct node*) malloc (sizeof(struct node));
struct node * head = NULL;
insert(head,60);
insert(head,70);
traverse(head);



return 0;

}
