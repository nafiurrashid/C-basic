#include <bits\stdc++.h>
using namespace std;
int main ()
{
int n,i,l ;
char s[100];
char b;
vector <string>v;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
scanf ("%s",s);
v.push_back(s);
}
cout << endl ;
sort (v.begin(),v.end());

for (unsigned int i=0;i<v.size();i++)
{    cout <<v[i]<< "  ";
}
cout << endl ;
return 0;
}
