#include<stdio.h>
int main(){
int i;
for(i=0;i<10;i++){
    printf("%d\n",i);

}

for(i=0;i<=10;i++){
    printf("%d\n",i);

}

for(i=10;i>0;i--){
    printf("%d\n",i);

}

int ans=5;
if(ans==2+3)printf("hahaha\n\n");
int flag=1;
int num;
printf("Enter your number: ");
scanf("%d",&num);
for(i=2;i<=(num/2);i++){//be careful its==>> 2-num/2
        if ((num%i)==0)
            flag=0;
}

if(flag==1)printf("it's prime!! yeaaaa\n");
else printf("Not prime!! hush!!\n");


printf("Enter your number: ");
scanf("%d",&num);
for(i=17;i<=100;i++){//be careful its==>> 2-num/2
        if ((num%17)==0)
            flag=0;
}

if(flag==0)printf("it's divided by 17!! yeaaaa\n");
else printf("CAN Not devide!! hush!!\n");

int nt;
printf("kisher namta jante chan?\n");
scanf("%d",&nt);
for(i=1;i<=10;i++){printf("%d*%d=%d\n",nt,i,nt*i);}

int div;
printf("kisher gunitok jante chan?\n");
scanf("%d",&div);
int flag2=0;
for(i=1;i<=div;i++){
    if((div%i)==0)printf("%d\n",i);
}

return 0;
}
