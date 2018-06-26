#include<stdio.h>
void sub(int *a,int v){
    int i,c=0;
for( i=0;i<=3;i++){
if( a[i] == v){
        c++;
}
    }
 printf("%d\n\n",c);


for( i=0;i<=3;i++){
if( a[i] == v){

    for( i=0;i<=3;i++){a[i]=a[i+1];}
}

}

 for( i=0;i<=3-c;i++){printf("%d ",a[i]);}
}
int main(){

int A[4] = {3,2,2,3};
int V = 3;
 sub((int*)A, V );
}
