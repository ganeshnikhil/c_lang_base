#include<stdio.h>
int main(){
   int marks_sci,marks_math;
   printf("Enter you maths marks:");
   scanf("%d",&marks_math);
   printf("Enter you science marks:");
   scanf("%d",&marks_sci);
   if (marks_math>60 && marks_sci>60){
      printf("you got 45 ruppes. you passed in both science and maths exams\n");
   }
   else if(marks_math>60 && marks_sci<60){
      printf("You got 10 ruppes . you only passed in maths exams\n");
   }
   else if(marks_math<60  && marks_sci>60){
      printf("you got 10 ruppes . you only passed in science exams\n");
   }
   else{
      printf("you haven't passed any of exams..\n ");
   }

}