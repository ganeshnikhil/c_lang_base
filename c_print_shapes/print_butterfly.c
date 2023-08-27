#include<stdio.h>
int main(){
   int i,j,k,length;
   length=10;
   //upper half 
   for(i=0;i<=length;i++){
      for(j=0;j<=length;j++){
         if (j<=i){
            printf("-");
         }
         else{
         printf(" ");
         }
      }
      for(k=length;k>=0;k--){
        if (k<=i){
         printf("-");
        }
        else{
         printf(" ");
        }
      }
   printf("\n");
   }

   //lower half
   // modified upper half reverse the i loop and opposite the if condition 
   for(i=length-1;i>=0;i--){
      for(j=0;j<=length;j++){
         if (i>=j){
            printf("*");
         }
         else{
         printf(" ");
         }
      }
      for(k=length;k>=0;k--){
        if (i>=k){
         printf("*");
        }
        else{
         printf(" ");
        }
      }
   printf("\n");
   }
}