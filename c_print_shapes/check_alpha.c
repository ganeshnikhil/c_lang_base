#include<stdio.h>
int isalpha(int valchar){
   if ((valchar>=97 && valchar<=122) || (valchar>=65 && valchar<=90)){
      return 1;
   }
   return 0;
}

int main(){
   char character;
   printf("Enter assci value:");
   scanf("%c",&character);
   int valchar= (int) character;
   int flag=isalpha(valchar);
   if (flag){
      printf("%c is an alphabet\n",character);
   }
   else{
      printf("%c is not an alphabet\n",character);
   }
}