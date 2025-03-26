#include<stdio.h>
int array_sum(int array[],int limit){
int sum=0;
  for (int i=0;i<limit;i++){
    sum=sum+array[i];
  }
   return sum;
} 
int main(){
int i,limit,sum=0;
  printf("\nEnter the number of  elements ");
  scanf("%d",&limit);
  int array[limit];
  printf("\nEnter the  elements ");
  for (int i=0;i<limit;i++){
  
    scanf("%d",&array[i]);
  }
  sum=array_sum(array,limit);
  printf("the sum of elements is%d",sum);
  }
