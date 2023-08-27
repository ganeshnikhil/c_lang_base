#include<stdio.h>
#include<stdbool.h>
int main()
{  //intialize the variable that we gone use in this program 
   int i,intial,final,mid,input;
   // intialize a bool 
   bool flag;
   //flag value intially is equal to true
   flag=false;
   //intialize a array and give value in sorted form 
   int data[10]={1,2,3,4,5,6,7,8,9,10};
   //take input from user that you want to search in array 
   printf("Enter you no to search:");
   scanf("%d",&input);
   //intial pointer is at  0 
   intial=0;
   //final pointer is  at  9
   final=(sizeof(data)/sizeof(data[0]))-1;
   // if intial greater than final exit while loop
   while (intial<=final){
      //as we know array is sorted. we go to mid of array then compare it is greater or less
      mid=(intial+final)/2;
      //if your input is less than array[mid] 
      //then move final pointer to mid-1
      if (data[mid]>input){
         final=mid-1;
        
      }
      //if input is greater than array[mid]
      //then move intial pointer to mid+1
      else if(data[mid]<input){
         intial=mid+1;

      }
      //if you found user input print the index 
      //put flag=true to confirm that we found it
      //break the while loop
      else{
         printf("your input found at index %d\n",mid);
         flag=true;
         break;
      }

   }
   //if flag is false means it dosen't found our given input 
   //print we did not found it.
   if (flag==false){
      printf("your input dosent exist in database\n");
   }
}

/*
f=9 [final]
i=0 [intial]
inp=9
Ex:
we know mid=i+f/2 is less than input given to find
mid=0+9/2=4
i=0            mid=4                f=9
[1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10] 9>5

we know mid=i+f/2 is less than input given to find
we don't gone include mid because it is already evaluated to we move i=mid+1

mid=5+9/2=7
                   i=4+1    mid=7    f=9
[1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10] 9>8

mid=8+9/2=8
                             mid=8,i=7+1 f=9
[1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,   9   ,  10] 9=9

input found in array print it's index which is 8.
*/