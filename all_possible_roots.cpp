#include <bits/stdc++.h>

using namespace std;

int coef[100] = {0};
double roots[100];
int max_power;
double error;
int flag = 0, co;
void All_possible_roots(double p,double q,double delx);
double fx(double x0);
double bi_section(double x1, double x2);

int main()
{
    double p,q,ans,delx;
    printf("Enter the maximum power : ");
    scanf("%d",&max_power);
    for(int i = 0 ; i <= max_power ;i++)
    {
        printf("Co-efficient of x%d = ",i);
        scanf("%d",&coef[i]);
    }
    printf("Enter the lower limit : ");
    scanf("%lf",&p);
    printf("Enter the upper limit : ");
    scanf("%lf",&q);
    printf("Enter error : ");
    scanf("%lf",&error);
    printf("Input delX : ");
    scanf("%lf", &delx);
    All_possible_roots(p,q,delx);
    if(flag == 1)
    {
        printf("X1 and X2 do not bracket any root.\n\n");
    }
    else
    {
        for(int i = 0 ; i < co ; i++)
        {
            printf("%lf ",roots[i]);
        }
    }
}
void All_possible_roots(double p , double q, double delx)
{
    int co = 0;
    double x1 = p;
    double x2 = p+delx;
    while(x2 < q)
    {
        if(fx(x1)*fx(x2) > 0)
        {
            flag = 1;
            return ;
        }
        else if(fx(x1)*fx(x2) < 0)
        {
            roots[co++] = bi_section(x1,x2);
        }
        x1 = x2;
        x2 = x2+delx;
    }
}
double bi_section(double x1, double x2)
{
    double x0;
    do{
    x0 = (x1+x2)/2.0;
    if(fx(x0) == 0)
        return x0;
    if(fx(x0)*fx(x1)< 0)
        x2 = x0;
    else x1 = x0;
    if(fabs((x2-x1)/x2) <= error)
        return x0;

    }while(fabs((x2-x1)/x2) > error);

}
double fx(double x0)
{
    double fx1 = 0;
    for(int i=max_power;i>=1;i--)
    {
        fx1+=coef[i] * (pow(x0,i)) ;
    }
    fx1+=coef[0];
    return fx1;
}
