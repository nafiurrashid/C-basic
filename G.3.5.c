#include<stdio.h>
int main(){
int a,b;
char c;
printf("Do u wanna calculate?\n");
do{
   printf("enter the first letter: ");
   c= getchar();
   }while(c!='a'&&c!='s'&&c!='m'&&c!='d');
    printf("\n\n");
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

   if (c=='a')printf("%d+%d=%d",a,b,a+b);
    else if (c=='s')printf("%d-%d=%d",a,b,a-b);
    else if (c=='m')printf("%d*%d=%d",a,b,a*b);
    else if (c=='d')printf("%d/%d=%d",a,b,a/b);

    do{printf("\nenter a letter hopefully a 'q'\n");
    c=getche();
    }while(c!='q');

        printf("\nFound the q");

    return 5;

}
