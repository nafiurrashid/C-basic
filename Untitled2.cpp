#include<stdio.h>
#include <stdlib.h>
struct node{
int element;
struct node *next ;
//node * next ;//^^eibhabei lekha jay
};
struct node * h = NULL ;
void insert (struct node *dummy ,int n){
struct node *temp =dummy;
while(temp->next!=NULL){
    temp= temp->next;
}
struct node * new_node =(struct node *)malloc(sizeof(struct node));
new_node ->element = n;
new_node ->next =NULL;
temp ->next = new_node ;
//printf("%d\n",*new_node);
}


void traverse (struct node *dummy ){
    struct node *i =dummy;
    while(i->next !=NULL ){
    i=i ->next ;
     printf("\n%d",i->element);
    }
//printf("%d",*dummy);



}

struct node * find (struct node * dummy ,int v){
 struct node *i =dummy;
 //printf("dfghj");

 while(i->next !=NULL ){
    i=i ->next ;
     //printf("\n%d",i->element);
    }
 if (i->next ==NULL)printf ("\n FOUND!!");
    /*while(i->next ==NULL ){
   i=i ->next ;
  /* if (i==NULL){
     printf("\n%d not found",v);}*/

//printf("%d",v);
}


int main (){

struct node* list = (struct node*) malloc (sizeof(struct node));
list -> next = NULL;
insert (list,60);

insert (list,70);
insert (list,80);
insert (list,90);
insert (list,100);
traverse (list );
find (list ,75);
return 0;
}
