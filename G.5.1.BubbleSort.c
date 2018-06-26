#include<stdio.h>
 struct student{
 char name[20];
 int roll;
 int number;
 };
int main(){
int a,b,c,d,i,j,k,n,ar[20];
printf("no of element:\n");scanf("%d",&n);
   /* for(i=0;i<=n-1;i++){
        printf("Enter element no %d: ",i+1);
        scanf("%d",&ar[i]);
    }

    for(i=0;i<=n-2;i++){
        for(j=0;j<=n-2-i;j++){
            if(ar[j]>ar[j+1]){
                k=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=k;
            }
        }
    }

    for(i=0;i<=n-1;i++){

        printf("%d\n",ar[i]);

    }*/

struct student st[n+1];
    for(i=0;i<n;i++){
        printf("student name:\n");
        gets(st[i].name);
        printf("student roll:\n");
        scanf("%d",&st[i].roll);
        printf("student number:\n");
        scanf("%d",&st[i].number);

    }

    for(i=0;i<=n-2;i++){
        for(j=0;j<=n-2-i;j++){
            if(st[j].number>st[j+1].number){
                k=st[j].number;
                st[j].number=st[j+1].number;
                st[j+1].number=k;
            }
        }
    }

printf("\n\n");

    for(i=0;i<=n-1;i++){
       // printf("student name: %c \n",st[i].name);
        printf("student roll: %d\n",st[i].roll);
        printf("student number: %d\n",st[i].number);

    }
}
