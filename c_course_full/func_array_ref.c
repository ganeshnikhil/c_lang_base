#include<stdio.h>

float average(int *ptr,int length){
   float sum = 0;
   for (int i=0;i<length;i++){
      sum+=ptr[i];
   }
   return sum/length;
}


int main(){
  int arr[]={1,2,3,4,5,6,7,8};
  int len=sizeof(arr)/sizeof(arr[0]);
  float a = average(arr,len);
  printf("sum = %f\n",a);
  return 0;

}