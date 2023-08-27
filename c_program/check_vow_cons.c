# include<stdio.h>
int main(){
   char character;
   char vowel[]={'a','A','E','e','i','I','o','O','u','U'};
   int flag=1;
   printf("Enter the character:");
   scanf("%c",&character);
   for(int i=0;i<10;i++){
      if (vowel[i]==character){
         printf("%c is vowel\n",character);
         flag=0;
         break;
      }
   }
   if (flag){
      printf("%c is consonant\n",character);
   }
}