#include<stdio.h>
#include<conio.h>
int main(){
int i;
char c;
c='a';
for(i=0;c!='q';i++){
        printf("\npass: %d\n",i);c=getche();
    }
    c='a';
//printf("found the 'q'");
for(c=getche();c!='q';c=getche())printf("found the 'q'");//ager line er kaj loop diye kora arki


return 0;
}
