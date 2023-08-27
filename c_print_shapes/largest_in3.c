#include<stdio.h>
int main(){
   int a,b,c;
   a=20;
   b=20;
   c=30;
   if (a>b && a>c){
      printf("a(%d) is greater than b(%d) c(%d)\n",a,b,c);
   }

   
   else if(b>=a && b>=c){
      printf("b(%d) is greater than c(%d) a(%d)\n",b,c,a);
   }
   else if(c>=a && c>=b){
         printf("c(%d) is greater than a(%d) b(%d)\n",c,a,b);
   }

   
}