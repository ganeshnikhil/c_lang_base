#include<stdio.h>
int main(){
   int i,j;

   int lenght=10;
   int count=0;
   for ( i = 0; i < lenght; i++)
   {
      for (j=lenght ; j>=0; j--){

         if(j<=i){
            if(j==i || j==0||i==lenght-1){
               printf("*");
            }
            else{
               printf(" ");
            }
        }

         printf(" ");  
      }

   printf("\n");
   }
}