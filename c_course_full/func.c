#include<stdio.h>


int sum(int a,int b){
   return a+b;
}


int main(){
  int a ,b,c;
  a=9;
  b=87;
  c=sum(a,b);
  printf("sum of %d + %d = %d\n",a,b,c);
  return 0;
}