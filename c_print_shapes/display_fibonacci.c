#include<stdio.h>
void swap(long long int  *a, long long int *b) {
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
   long long int first,last;
   int n;
   printf("no fo fibbonaci:");
   scanf("%d",&n);
   first=1;
   last=-1;
   printf("\n");
   for(int i=0;i<=n;i++){
      last=first+last;
      swap(&first,&last);
      printf("%lld ",first);
   }
   printf("\n");
   
}