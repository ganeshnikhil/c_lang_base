#include<stdio.h>
int main(){
   char assci;
   printf("Enter the assci code:");
   printf("Enter a character: ");
   scanf("%c", &assci);

   int asciiValue = (int) assci;

   printf("ASCII value of %c is %d\n", assci, asciiValue);

}