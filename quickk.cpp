
// Quick Sort
// Best Case O(NlogN)
// Worst Case O(N^2)
// Average Case O(NlogN)
// Memory O(N)
// Stable : NO
// N -> Number of elements
//#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
#define mx 10000000
int A[mx];
void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int low,int high)
{
    int x = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void Quick_Sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid = partition(arr,low,high);
        Quick_Sort(arr,low,mid-1);
        Quick_Sort(arr,mid+1,high);
    }
}
int main()
{
    int N; // N is the number of elements
    scanf("%d",&N);
    for(int i=1;i<=N;i++) scanf("%d",&A[i]);
    Quick_Sort(A,1,N);
    for(int i=1;i<=N;i++) printf("%d ",A[i]);
    return 0;
}

