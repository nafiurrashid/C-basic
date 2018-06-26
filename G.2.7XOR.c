#include<stdio.h>
int XOR(int a,int b);
int main(){
 int p,q;
 printf("Enter first :");
 scanf("%d",&p);
 printf("Enter second :");
 scanf("%d",&q);

printf("p&&q=:%d\n",(p&&q));
printf("p||q=:%d\n",(p||q));
printf("p XOR q=%d:\n",XOR(p,q));

return 0;
}

int XOR(int a, int b){

return (a||b)&&!(a&&b);
}
