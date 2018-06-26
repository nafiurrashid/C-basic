#include<stdio.h>
double volume(double s1,double s2, double s3);
int main(){
double vol,x,y,z;
printf("Enter length:"); scanf("%lf",&x);
printf("Enter width:"); scanf("%lf",&y);
printf("Enter height:"); scanf("%lf",&z);
vol= volume(x,y,z);
printf("volume: %lf",vol);

return 59;

}
double volume(double s1,double s2,double s3){

return s1*s2*s3;
}


