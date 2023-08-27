#include<stdio.h>
#include<string.h>
float convert_unit(float conversion,char unit_in[5],char conversion_to[5]){
    if (strcmp(unit_in,"km")==0 && strcmp(conversion_to,"mile")==0)
   {
      return (conversion*0.621371);
   }
   else if (strcmp(unit_in,"inch")==0 && strcmp(conversion_to,"foot")==0)
   {
     return (conversion/12.0);
   }
   else if (strcmp(unit_in,"cm")==0 && strcmp(conversion_to,"inch")==0){
      return (conversion/2.54);
   }
   else if (strcmp(unit_in,"pound")==0 && strcmp(conversion_to,"kg")==0){
     return (conversion*0.45359237);
   }
   else if(strcmp(unit_in,"inch")==0 && strcmp(conversion_to,"m")==0){
      return (conversion*0.0254);
   }
   else{
     return 0;
   }
}
int main(){
   float conversion;
   char unit_in[5];
   char conversion_to[5];
   float result;
   printf("[+]conversion available\n");
   printf("[*] km to miles\n");
   printf("[*] inch to foot\n");
   printf("[*] cm to inch\n");
   printf("[*] pound to kg\n");
   printf("[*] inch to meter\n");
   for(int i=0;i<=100;i++){
      printf("Enter the value you want to convert:");
      scanf("%f",&conversion);
      if (conversion==0){
         printf("Program ended...!\n");
         break;
      }
      printf("Enter the unit of your value:");
      scanf("%s",unit_in);
      printf("Enter the unit you want to convet to:");
      scanf("%s",conversion_to);
      result=convert_unit(conversion,unit_in,conversion_to);
      if (result==0){
         printf("\nInvalid input....\n");
         break;
      }
      else{
         printf("\n%s to %s is %f\n",unit_in,conversion_to,result);
      }
   }
}
