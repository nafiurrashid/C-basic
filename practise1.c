#include <stdio.h>
void add(int a[]);
int main(){
     int A[5]={1,2,3,4,5};
     add( A);   /* Only name of array is passed as argument. */

     return 0;
   }
void add(int a[]){
     int i ;
     for(i=0;i<5;++i){
       a[i]=a[i]+1;
       printf("%d ",a[i]);
     }


}
