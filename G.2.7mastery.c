#include<stdio.h>
int main(){
int g,c,i;
c=10;
for(i=0;i<=10;i++){
printf("Enter guessed number:",g);
scanf("%d",&g);

if (g==c){printf("RIGHT GUESS!!u guessed %d times",i+1);break;}
else if (g>c)printf("u guessed a higher number\n");
else printf("u guessed a lower number\n");
}

}
