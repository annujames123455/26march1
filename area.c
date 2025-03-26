#include<stdio.h>
#define pi 3.141159
int main(){
int r1,area1;
printf("\n enter the radius:");
scanf("%d",&r1);
area1=pi*r1*r1;
printf("area of a circle is: %d\n",area1);
int h,r2,area2;
printf("enter the height:");
scanf("%d",&h);
printf("\n enter the radius2:");
scanf("%d",&r2);
area2=2*pi*r2*h+2*pi*r2*r2;
printf("area of a cylindar is %d\n",area2);
return 0;
}
