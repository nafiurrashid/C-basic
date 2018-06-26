#include<stdio.h>
#include<conio.h>
int main(){
int i,j,k;
for(i=0;i<=2;i++)//alphbet set ta koybar print hobe?
    for(j=0;j<=25;j++)//alphabet set
        for(k=0;k<=1;k++)//each alphabet koybar print hobe?
            printf("%c",'A'+j);

printf("\n\n");

int ans,count,chances,right,sum;
    for(count=1;count<=10;count++){
        printf("what is %d+%d? \n",count,count);
        scanf("%d",&ans);
        if (ans==count+count)printf("Right!!\n");
        else{
            printf("try again,Kid!\n");
            right=0;

            for(chances=0;chances<=2&&!right;chances++){
                printf("what is %d+%d? \n",count,count);
                scanf("%d",&ans);
                if (ans==count+count){printf("Right!!\n");right=1;}
            }
                if(!right) printf("okay,the answer is %d\nbetter luck next time,kid!! \n",count+count);

        }
    }

return 59;
}
