#include<stdio.h>
int main(){
  int i,limit,sum=0;
  printf("\nEnter the number of  elements ");
  scanf("%d",&limit);
  int array[limit];
  printf("\nEnter the  elements ");
  for (i=0;i<limit;i++){
    scanf("%d",&array[i]);
    sum=sum+array[i];
    
   }
   printf("the sum of elements is%d",sum);
return 0;
}
