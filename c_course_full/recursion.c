#include<stdio.h>
int factorial(int number){
   if (number==1||number==0){
      return 1;
   }
   else{
      return (number*factorial(number-1))
   }
}


int main(){
   int number,result;
   printf("Enter the number whose factorial you want:")
   scanf("%d",&number)
   result=factorial(number);
   printf("\nfactorail of given no is:%d\n",result)
   return 0;
}