#include<stdio.h>
int main(){
char c;

printf("enter your the letter necessary :\n");

c= getche();

int a,b;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
switch(c){
case 'a':
    printf("%d+%d=%d\n",a,b,a+b);
    break;
case 's':
    printf("%d-%d=%d\n",a,b,a-b);
    break;
case 'm':
    printf("%d*%d=%d\n",a,b,a*b);
    break;
case 'd':
    printf("%d/%d=%d\n",a,b,a/b);
    break;
default:
     printf("not a valid letter\n");

}

}
