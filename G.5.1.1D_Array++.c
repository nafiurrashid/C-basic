#include<stdio.h>
#include<conio.h>
int main(){
int a1[10],a2[10],i;
    for(i=0;i<10;i++)a1[i]=i;
  //  for(i=0;i<10;i++)printf("%d\n",a1[i]);

    for(i=0;i<10;i++)a2[i]=a1[i];
//a2[]={10,9,8,7,6,5,4,3,2,1};
    for(i=0;i<10;i++)printf("%d\n",a2[i]);
printf("\n");printf("\n");


char mess[100];
printf("Enter msg:\n");
for(i=0;i<100;i++){
    mess[i]=getche();
    if(mess[i]=='\r')break;
}
printf("\n");

for(i=0;mess[i]!='\r';i++)printf("%c",mess[i]);
printf("\n");

return 59;

}
