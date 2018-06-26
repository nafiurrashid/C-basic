#include <bits\stdc++.h>
using namespace std;
#define mx 10000000
int A[mx+10];
vector <string>v;
char s[100];



int partition(vector v,int low,int high)
{
    int x = s[high];
    int i = low-1;
    for(int j=low;j<high;j++)
    {
        if(s[j]<=x)
        {
            i++;
            swap(s[i],s[j]);
        }
    }
    swap(s[i+1],s[high]);
    return i+1;
}
void Quick_Sort(char s[],int low,int high)
{
    if(low<high)
    {
        int mid = partition(s,low,high);
        Quick_Sort(s,low,mid-1);
        Quick_Sort(s,mid+1,high);
    }
}

int main()
{
freopen("input.txt", "r", stdin);
int N,i ;
char s[100];
vector <string>v;
scanf ("%d",&N);
for (i=0;i<N;i++)
{
scanf ("%s",s);
v.push_back(s);
}
//sort (v.begin(),v.end());
Quick_Sort(v,1,N);
for (unsigned int i=0;i<v.size();i++)
{    cout <<v[i]<< "  ";
}

cout << endl ;


    return 0;
}


