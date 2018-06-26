#include <stdio.h>
int max(int *x, int n)
{
    int m,k;
    x[0] = m;
    for(k=0; k<n; k++){
        if(x[k]> m){
            m = x[k];
        }
    }
    return m;
}
int main()
{
    int a,b,c,d,e,i,j;
    int x[10]={1,2,30,4,11,6,7,8,9,10};
    int y = max(x,10);
    printf("%d", y);
}
