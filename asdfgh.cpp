#include <bits/stdc++.h>
#define white 0
#define gray 1
#define black 2
#define matsize 100
#define max 10

using namespace std;

int v,e,tim;
int parent[10];
int color[10];
int finish_Time[10],discover_Time[10];
void DFS(int matrix[matsize][matsize]);
void DFS_visit(int matrix[matsize][matsize],int u);
void Topological_Sort();
int max_Time(int ar[]);
int main()
{
    int x,y;
    int matrix[matsize][matsize]; //
    printf("Enter Vertex :");
    scanf("%d",&v);
    printf("Enter Edge : ");
    scanf("%d",&e);
    for(int i = 1 ; i <= v ;i++)// bubble sort er moto kore all possible path ber korbo;
    {
        for(int j = 1 ; j <= v ; j++)
        {
            matrix[i][j] = 0;
        }
    }
    printf("Enter edges (u,v) : ");
    for(int i = 1 ; i <= e ; i++)
    {
        scanf("%d%d",&x,&y);
        matrix[x][y]=1;
    }
    printf("Matrix \n\n");
    for(int i = 1 ; i <= v ;i++)
    {
        for(int j = 1 ; j <= v ; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    DFS(matrix);
    Topological_Sort();
}
void DFS(int matrix[matsize][matsize])
{
    int i ,j;
    for(i = 1 ; i <= v ; i++)
    {
        parent[i] = -1;
        color[i] = white;
    }
    tim = 0;
    for(j = 1 ; j <= v ; j++)
    {
        if(color[j] == white)
        {
            DFS_visit(matrix,j);
        }
    }
}
void DFS_visit(int matrix[matsize][matsize],int u)
{
    int i,j;
    color[u] = gray;
    discover_Time[u]= ++tim;
    for(i = 1 ; i <= v ; i++)
    {
        if(matrix[u][i] != 0)
        {
            if(color[i] == white)
            {
                parent[i] = u;
                DFS_visit(matrix,i);
            }
        }
    }
    color[u] = black;
    finish_Time[u] = ++tim;
}
void Topological_Sort()
{
    int i,j;
    int temp[100];
    for(i = 1 ; i <= v ; i++)
    {
        temp[i]=finish_Time[i];
    }
    int MaxIndex;
    for( i = 1 ; i <= v ; i++)
    {
        MaxIndex = max_Time(temp);
        printf("%d ",MaxIndex);
    }

}

int max_Time(int ar[])
{
    int i;
    int MaxIndex = 1;
    for(i = 1 ; i <= v ; i++)
    {
        if(ar[MaxIndex] <= ar[i])
        {
             MaxIndex = i;
        }

    }
    ar[MaxIndex] = -1;
    return MaxIndex;
}
