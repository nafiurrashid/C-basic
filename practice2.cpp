//Pattern 1
#include<stdio.h>a
#include<conio.h>
int main(){
int n,i,j;
printf("Enter the no of lines: ");
scanf("%d", &n);
for(i=0;i<n;i++){ //number of lines
for(j=0;j<=i;j++){ //number of stars in each line
printf("*");
}
printf("\n");
}
getch();
return 0;
}
