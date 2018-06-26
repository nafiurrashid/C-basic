#include<stdio.h>
#include<conio.h>
int main(){
char c;int a,b;
printf("Enter any character:\n");
c= getchar();
printf("You typed: %c\n",c);
printf("its ascii is %d\n",c);

/*
char ch='h';
ch= getchar();
printf("You didnt type: %c",ch);

*/
if (c<'h')printf("its less than h\n");
else printf("its ok\n");

printf("Do u want to see the calculator?[y/n]\n");
c= getche();
    printf("\n");
if(c=='n')return 0;
if(c=='y'){
    /*printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);*/

    printf("for add=a,subtraction=s,multiplication=m,division=d[a,s,m,d]\n");
    c =getche();
    printf(" \n");

    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
        if (c=='a')printf("%d+%d=%d",a,b,a+b);
        if (c=='s')printf("%d-%d=%d",a,b,a-b);
        if (c=='m')printf("%d*%d=%d",a,b,a*b);
        if (c=='d')printf("%d/%d=%d",a,b,a/b);


}
return 0;
}
