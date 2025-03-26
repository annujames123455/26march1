#include<stdio.h>
int power(int base,int exp){
if (exp==0){
return 1;
}else{
return base*power(base,exp-1);
}
}
int main(){
int base;
printf("\n enter a  base number:");
scanf("%d",&base);
int exp;
printf("\n enter the exp number:");
scanf("%d",&exp);
int result=power(base,exp);
printf("%d raised to power %d is:%d/n",base,exp,result);
return 0;
}
