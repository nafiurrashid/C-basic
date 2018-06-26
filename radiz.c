#include<bits/stdc++.h>
#include<time.h>
#include<math.h>
#include<algorithm>
using namespace std;

int A[500002];
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


start= clock();
        RADIX_SORT(A,2);
       end = clock();
       difference = end -start;
       seconds = (difference*1.0)/CLOCKS_PER_SEC;
      printf("%lf \n",seconds);

      }
