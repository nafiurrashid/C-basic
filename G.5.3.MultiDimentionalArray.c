#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int td[4][5];
int i,j;

    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            td[i][j]=i*j;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++)
            printf("%d",td[i][j]);
            printf("\n");
    }



return 59;
}
