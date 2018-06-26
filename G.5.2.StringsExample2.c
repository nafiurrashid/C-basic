#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
char com[50],temp[50];
int i,j;

for(;;){
    printf("operation?\n");
    gets(com);
    if(!strcmp(com,"quit"))break;

    printf("Enter first number:\n");
    gets(temp);
    i=atoi(temp);

    printf("Enter second number:\n");
    gets(temp);
    j=atoi(temp);

    printf("its i=%d and j=%d\n",i,j);


    if(!strcmp(com,"add"))printf("%d\n",i+j);

    if(!strcmp(com,"sub"))printf("%d\n",i-j);

    if(!strcmp(com,"mul"))printf("%d\n",i*j);

    if(!strcmp(com,"div"))printf("%d\n",i/j);
}



    return 59;
}

