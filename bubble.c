#include<bits/stdc++.h>
#include<time.h>
#include<math.h>
#include<algorithm>
using namespace std;
int A = 20;

int BUBBLESORT(int* A,int n)
{
   int i,j;
   for(i=0;i<=n-2;i++)
   {
       for(j=n-1;j>=i+1;j--)
       {
           if(A[j]<A[j-1])
            swap(A[j],A[j-1]);
       }
   }
}


int main()
{
     int i;
    srand(time(NULL));
    for(i=0;i<20;i++)
    {
        A[i]=rand()%100;
        }

              long start= clock();
        BUBBLESORT(A,500000);
      long end = clock();
      long difference = end -start;
      double seconds = (difference*1.0)/CLOCKS_PER_SEC;
      printf("%lf \n",seconds);
      }
