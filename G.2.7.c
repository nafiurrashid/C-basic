#include<stdio.h>
int main(){
int i,j,k,a,b,c,d,x,y,z;
printf("Enter first number:");
scanf("%d",&i);
printf("Enter second number:");
scanf("%d",&j);

printf("i<j %d\n",i<j);
printf("i<=j %d\n",i<=j);
printf("i==j %d\n",i==j);
printf("i>j %d\n",i>j);
printf("i>=j %d\n",i>=j);



printf("i&&j %d\n",i&&j);
printf("i||j %d\n",i||j);
printf("!i!j %d %d\n",!i,!j);


printf("iXORj %d\n",(i||j)&& !(i&&j));
}
