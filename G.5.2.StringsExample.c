#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
char str1[80],str2[80];
int i;
printf("Enter first string: ");
gets(str1);
printf("Enter second string: ");
gets(str2);
printf("%s is %d char long\n",str1,strlen(str1));
printf("%s is %d char long\n",str2,strlen(str2));

i=strcmp(str1,str2);

if(!i)printf("its same!!\n");

if(i<0)printf("str1 larger!!\n");

if(i>0)printf("str2 larger!!\n");

if(strlen(str1)+strlen(str2)<=80){strcat(str1,str2);printf("concatenated string is :%s\n",str1);}

strcpy(str1,str2);
printf("%s && %s",str1,str2);


return 59;
}
