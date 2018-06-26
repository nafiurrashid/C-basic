
I'm trying to insert a node at a certain position. In my code, the numbers with position 1 is only being inserted (basically at the beginning of the linked list) and it is not inserting any data with position 2. Is there something wrong with temp2? When I ran the program it is not pointing to anything I think.

I know how much you guys hate homework problems being asked here but I just don't know what is wrong with my program. I'm just a beginner at this and my teacher didn't explain linked list well.

The code is below.

-The output that I'm getting is 8 7

-I would want it to read 8 6 7 5 where 6 and 5 are inserted at position 2

/*
Insert node at a given positon in a linked list.
First element in the linked list is at position 0
*/

#include<stdlib.h>
#include<stdio.h>

struct Node
{
   int data;
   struct Node* next;
};

struct Node *head;

void Insert(int data, int n)
{
   Node* temp1 = new Node();
   temp1->data = data;
   temp1->next = NULL;
   if (n == 1){
    temp1->next = head;
    head = temp1;
    return;
   }
   Node* temp2 = new Node();
   for (int i = 0; i < n-2; i++){// i feel like it doesn't even go through this loop
    temp2 = temp2->next;
   }
   temp1->next = temp2->next;
   temp2->next = temp2;
}
void print()
{
    Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
