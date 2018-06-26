#include <bits\stdc++.h>
using namespace std;
int A[100];
vector <string>v;
char s[100];
int main()
{
freopen("input.txt", "r", stdin);
int n,i ;
char s[100];
vector <string>v;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
scanf ("%s",s);
v.push_back(s);
}

sort (v.begin(),v.end());
//cout <<v [2];
for (unsigned int i=0;i<v.size();i++)
{    cout <<v[i]<< "  ";
}
cout << endl ;
    return 0;
}
