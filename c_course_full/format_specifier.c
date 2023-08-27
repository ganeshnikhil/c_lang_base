#include<stdio.h>
#define PI 3.14
int main(){
   
   float b=7.333;
   //%space.percison float
     
   printf("%2.4f\n",b);//write 6 characters in space of 2 with precision of 4
   printf("%3.4f\n",b);//write 6 charcters in space of 3 with precison of 4 decimal point 
   printf("%4.4f\n",b);//write 6 charcters in space of 4 with precison of 4 decimal point 
   printf("%5.4f\n",b);//write 6 charcters in space of 5 with precison of 4 decimal point  
   printf("%6.4f\n",b);//write 6 charcters in space of 6 with precison of 4 decimal point 
   printf("%7.4f\n",b);//write 6 charcters in space of 7 with precison of 4 decimal point 
   printf("%8.4f\n",b);//write 6 charcters in space of 8 with precison of 4 decimal point 
   printf("%9.4f\n",b);//write 6 charcters in space of 9 with precison of 4 decimal point 
   printf("%10.4f\n",b);//write 6 charcters in space of 9 with precison of 4 decimal point 
   printf("%11.4f\n",b);//write 6 charcters in space of 10 with precison of 4 decimal point 
   printf("%12.4f\n",b);//write 6 charcters in space of 11 with precison of 4 decimal point 
   printf("%-12.4f\n",b);//it will take space of 6 after printing the value
   // working with constants 
   const float a=7.3333;
   //the value is constant now it can't be changed in program 
   //pi is constant specified by using #define 
   printf("%f",PI);
   printf("\n66\n");//write number in octal no form
   printf("\x41");// write no in hexadecimal form ASSCI 
}