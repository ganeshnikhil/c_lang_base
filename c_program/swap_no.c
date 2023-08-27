#include<stdio.h>

int main(){
   int a,b,changer;
   a=10;
   b=20;
   printf("a=%d  b=%d",a,b);
   changer=a;
   a=b;
   b=changer;
   printf("\na=%d,b=%d\n",a,b);

}