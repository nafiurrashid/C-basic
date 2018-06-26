#include <stdio.h>
void sub(int *a,int *b) {

   int  i;
   for (i = 0; i < 3; i++) {
      a[i]=a[i]-b[i];
      printf("%d ",a[i]);
   }


}

int main () {


   int A[] = {10,20,30};
   int B[] = {1,2,3};
    sub( (int*)A, (int*)B ) ;
   return 0;
}


