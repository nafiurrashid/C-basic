#include<bits/stdc++.h>
#define eps .001
using namespace std;

double f(double x)
{
    return pow(x,2)-x-2;
}
int main()
{
    double a,b,c,fa,fb;
    cin >>a >>b;
    //fa = f(a);
    //fb = f(b);
    while(fabs(a-b) >= eps)
    {
        c = a-f(a)*(b-a)/(f(b)-f(a));
        if(f(c) == 0){ break;}
        cout <<a<<"       "<<c<<"      "<<f(c)<<endl;
        if(f(a)*f(c) <0) b=c;
        else a=c;
    }
    cout<<"Root:" <<c<<endl;

    return 0;
}
