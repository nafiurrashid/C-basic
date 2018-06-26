#include<stdio.h>
int main(){
int i,j,x,y,b=0;
int ar[10][10] ;
printf("Enter the matrix elements:\n");

for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          scanf("%d",&ar[i][j]);
        }

    }

printf("\n\n\nYour matrix is the following\n\n\n");
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          printf("%d ",ar[i][j]);

        }
          printf("\n");
    }



for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        b=ar[i][j]+b;

        }
        printf("The addition of row %d is %d\n",i+1,b);
        b=0;
    }




}
