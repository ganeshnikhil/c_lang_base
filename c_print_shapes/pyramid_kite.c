#include<stdio.h>
int main(){
   int i,j;

   int lenght=10;

   for ( i = 0; i < lenght; i++)
   {
      for (j=lenght; j>=0; j--){

         if(j<=i){
            printf("-");
         }

         printf(" ");
         
         
      }

   printf("\n");

   }


for ( i = 0; i < lenght; i++)
   {
      for (j=0; j<lenght; j++){

         printf(" ");
       
         if(j>=i){
            printf("*");
         }

      }

   printf("\n");

   }
   
}