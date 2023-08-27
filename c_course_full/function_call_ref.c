#include<stdio.h>
/* function definition to swap the values*/
void swap(int *x,int *y){
   int temp;
   temp= *x;
   *x = *y;
   *y= temp;
   return ;
}
int main(){
   int a=34, b=74;
   printf("a=%d and b=%d\n",a,b);
   swap(&a,&b);
   printf("a=%d and b=%d\n",a,b);
   return 0;
}
