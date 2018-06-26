#include<stdio.h>
int main(){
int total=0,i,j;
do{
printf("Enter next number:");//bujhi nai kisui
scanf("%d",&i);//mismatch er beparta useful;
printf("Enter again:");
scanf("%d",&j);
if(i!=j){printf("Mismatch\n");continue;}

total=total+i;break;
}while(i);
printf("Total is %d\n",total);
return 59;
}
