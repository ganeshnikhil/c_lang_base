#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isprime(int number){
   for(int i=2 ;i<=sqrt(number);i++){
      if (number%i==0){
         return 0;
      }
   }
   return 1;
}
int main(){
   int number;
   int second;
   printf("Enter the number:");
   scanf("%d",&number);
   for(int i=1 ;i<number ; i++){
      second=number-i;
      if (isprime(second) && isprime(i)){
         printf("%d + %d = %d\n",second,i,number);
         exit(0);
      }
   }
   printf("%d can't be repersented as sum of two prime no's\n",number);
  

}