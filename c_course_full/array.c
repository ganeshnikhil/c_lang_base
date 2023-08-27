#include<stdio.h>

int main(){
   //intialize a empty array of 4
   int marks[4];
   // take input in array 
   for(int i=0;i< 4;i++){
      printf("Enter the value of %d element of the array:\n",i);
      scanf("%d",&marks[i]);
   }
   
   //print the stored value in array
   for(int i=0;i< 4;i++){
      printf("The value of %d element of the array is %d\n",i,marks[i]);
   }
   return 0;
}