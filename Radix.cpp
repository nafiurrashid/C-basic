#include<bits/stdc++.h>
#include<time.h>
#include<math.h>
#include<algorithm>
using namespace std;

int K[500002],A[500002],C[500001],digit[500005];

int COUNTING_SORT(int*A,int d)
{
    int C[10]={0},i,j;

for(i=1;i<=500000;i++)
    {
        digit[i]= (int)(A[i]/pow(10,d-1))%10;
        C[digit[i]]++;
    }


    for(i=0;i<=9;i++)
    {
        C[i+1]=C[i]+C[i+1];
    }

    for(j=500000;j>=0;j--)
    {


         K[C[digit[j]]] = A[j];
        C[digit[j]] = C[digit[j]]-1;

    }
    for(i=1;i<=500000;i++)
    {
        A[i]=K[i];
    }



}


int RADIX_SORT(int*A,int d)
{
    int i;

    for(i=1;i<=d;i++)
    {
        COUNTING_SORT(A,i);

    }


}

int main()
{
     int i;
    srand(time(NULL));
    for(i=0;i<500000;i++)
    {
        A[i]=rand()%100;

    }


         long start= clock();
        RADIX_SORT(A,2);
       long end = clock();
       int difference = end -start;
      int seconds = (difference*1.0)/CLOCKS_PER_SEC;
      printf("%lf \n",seconds);

      }
