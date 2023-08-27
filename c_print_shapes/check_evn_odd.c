#include<stdio.h>
int main(){
   int value;
   printf("Enter the number:");
   scanf("%d",&value);
   if(value%2==0){
      printf("%d is even\n",value);
   }
   else{
      printf("%d is odd\n",value);
   }
}