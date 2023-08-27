#include<stdio.h>
int max(int *arr,int length){
   int max=arr[0];
   for(int i=0;i<length;i++){
      if(arr[i]>max){
         max=arr[i];
      }
   }
   return max;
   
}

int main(){
   int list[]={5,7,2,22,67,89,10,23,78,35,67,89,90};
   int len=sizeof(list)/sizeof(list[0]);
   int greater=max(list,len);
   printf("Maximum value in the given array is %d\n",greater);
}