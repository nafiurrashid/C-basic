#include <stdio.h>
int twoD(int **arr, int r, int c)
{
    int res=0;
    for(int i=0; i<r; i++){
        for(int j = 0; j<c; j++){
            res= res + (int)* (arr+i*c+j);
        }
    }
    return res;
}

int main()
{
    int arr[2][2] = {{5,2},{2,4}};
    int r =twoD((int**)arr,2,2);
    printf("%d\n", r);
    return 0;
}
