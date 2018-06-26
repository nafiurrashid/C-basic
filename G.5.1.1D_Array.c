#include<stdio.h>
int main(){
int ar[6];//mot shongkhya,so 1 beshi hobe;
int i;
for(i=0;i<=5;i++)printf("%d\n",ar[i]);
 ar[0]=100;
 ar[1]=101;
 ar[2]=102;
 ar[3]=103;
 ar[4]=104;
 ar[5]=105;
 for(i=0;i<=5;i++)printf("%d\n",ar[i]);
// ar{6}={1,2,3,4,5,6};
//  for(i=0;i<=5;i++)printf("%d\n",ar[i]);
int sqrs[10];
 for(i=1;i<=10;i++){
        sqrs[i]=i*i;
 printf("%d\n",sqrs[i]);

    }

int temp[31],min=10,max=10,avg=0,days=7;
for(i=0;i<days;i++){
    printf("enter temp:\n");
    scanf("%d",&temp[i]);
}

for(i=0;i<days;i++)avg=avg+temp[i];

printf("avg:%d\n",avg/days);

for(i=0;i<days;i++){
   if(min>temp[i])min=temp[i];//not a good way to find max or min
   if(max<temp[i])max=temp[i];

}
printf("min:%d\n",min);
printf("max:%d\n",max);
}
