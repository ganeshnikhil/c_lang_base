#include<stdio.h>

int main(int argc, char const *argv[])
{
   int a,b;
   printf("Enter number a:");
   scanf("%d",&a);
   printf("Enter number b:");
   scanf("%d",&b);
   int sum=a+b;
   printf("sum of a+b is:%d\n",sum);
   return 0;
}
//compile the c program.
// gcc filename.c -o filename
//run the c file.
//./filename


// to see the step wise execution of c program.
//gcc -Wall -save-temps filename.c -o filename


//step 1:
//pre-processed output: expand all the library  inlcuded in c program  and remove comments[filname.i]
//step 2:
//assembly level instruction:convert pre-processed file into assembly level[filname.s]
//step 3:
//machine code:convert assembly level into machine code "binary form"[filname.o]
//step 4:
//excutable file:conver machine code into excutable file[filename.out]
