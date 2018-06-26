#include<stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next ;
};
struct node * head = NULL ;

void insert (int x){
struct node* temp = (struct temp*) malloc (sizeof(struct node));
temp ->data =x;
temp->data = NULL;
if (head != NULL)temp ->next = head;

 //printf("\n%d",i->data);
 head = temp;
}

int main (){
/*struct node* list = (struct node*) malloc (sizeof(struct node));
list -> next = NULL;*/
insert (60);

insert (70);
insert (80);
insert (90);
insert (100);
}
