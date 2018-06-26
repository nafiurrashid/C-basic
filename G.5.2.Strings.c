#include<stdio.h>
int main(){
char name[20],name2[20],name3[20],name4[20];
int i,j,k,l;
/*printf("enter the name:");
gets(name);
for(i=0;name[i];i++)printf("%c",name[i]);
printf("\n");
printf(name);
printf("\n");
puts(name);
//printf("\n");
printf("%s",name);
// verdict== puts is the best one but %s offers more control
printf("\n");
strcpy(name,"abul");
puts(name);

printf("\n");
strcpy(name,"abul");
strcat(name," mal abdul muhit");//executes concatenation
puts(name);

strcpy(name2,"abul");
strcpy(name3,"abul");
if(!strcmp(name2,name3))printf("its the same\n");
*/
gets(name4);
l=strlen(name4);
printf("%d\n",l);
puts(name4);
char name5[l-3];
for(i=0;i<l;i++){
    name5[l-3-i]=name4[i];
}

k=strlen(name5);
printf("%d\n",k);
puts(name5);
printf("\n");
printf(name5);
printf("\nreal string is:");
for(i=0;i<l;i++)printf("%c",name5[i]);
if(!strcmp(name4,name5))printf("its the same\n");
return 59;
}
