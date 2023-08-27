#include<stdio.h>
#include<string.h>
int count(char *string,char find){
   int count=0;
   int index=0;
   while(string[index]!='\0'){
      if (string[index]==find){
         count++;
      }
      index++;
   }
   return count;
}
int main(){
   char string[100]="hello world!";
   char find='l';
   int repeat=count(string,find);
   printf("%c is repated %d time in the %s\n",find,repeat,string);

}

