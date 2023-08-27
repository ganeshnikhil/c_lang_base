#include<stdio.h>
#include<string.h>
#include<time.h>



int getDayOfWeek(int year, int month, int day) {
    // January and February are counted as months 13 and 14 of the previous year
    if (month < 3) {
        month += 12;
        year--;
    }

    int century = year / 100;
    int yearOfCentury = year % 100;

    int dayOfWeek = (day + ((13 * (month + 1)) / 5) + yearOfCentury +
                     (yearOfCentury / 4) + (century / 4) + (5 * century)) % 7;

    // Adjust for 0-based indexing where Sunday is represented as 0
    if (dayOfWeek == 0) {
        dayOfWeek = 6;
    } else {
        dayOfWeek--;
    }

    return dayOfWeek;
}

int main(){

    // Set color codes
    char* colorRed = "\033[31m";
    char* colorGreen = "\033[32m";
    char* colorYellow = "\033[33m";
    char* colorBlue = "\033[34m";
    char* colorMagenta = "\033[35m";
    char* colorCyan = "\033[36m";
    char* colorReset = "\033[0m";


    printf("\n");
    printf("%s", colorRed);
    printf("   CCCCCC    AAA    L      EEEEE  N   N  DDDDD EEEEE RRRRR \n");
    printf("   C        A   A   L      E      NN  N  D   D E     R   R\n");
    printf("   C       AAAAAAA  L      EEEE   N N N  D   D EEEE  RRRR \n");
    printf("   C       A     A  L      E      N  NN  D   D E     R   R  \n");
    printf("   CCCCCC  A     A  LLLLLL EEEEE  N   N  DDDDD EEEEE R    R  \n");
    printf("%s\n", colorReset);

     char* months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    char* weekdays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};                         

    time_t currentTime;
    struct tm* timeInfo;
    
    // Get the current time
    time(&currentTime);
    
    // Convert the current time to the local time
    timeInfo = localtime(&currentTime);
    
    // Extract the date and month from the time structure
    int day = timeInfo->tm_mday;
    int month = timeInfo->tm_mon + 1; // Months are 0-based, so add 1 to get the actual month value
    int year = timeInfo->tm_year + 1900;
    printf("%s", colorCyan);
    printf("====================================================\n");
    printf("%s",colorReset);
    printf("%s",colorRed);
    printf("#                        %s                    # \n",months[month]);
    printf("%s",colorReset);
    printf("%s",colorCyan);
    printf("====================================================\n");
    printf("%s",colorReset);

    int days;
    if (month == 2) {
            // February has 28 days (ignoring leap years for simplicity)
        days = 28;
    }else if (month == 4 || month == 6 || month == 9 || month == 11) {
            // April, June, September, and November have 30 days
        days = 30;
    } else {
        // All other months have 31 days
        days = 31;
    }


    for (int i=1; i<=days; i++){
        if (i<10){
            if(i==day){
               printf("\033[1;31m%d\033[0m                ",i);
            }
            else{
                printf("%d                ",i);
            }
        }
        else{
            if(i==day){
               printf("\033[1;31m%d\033[0m               ",i);
            }
            else{
                printf("%d               ",i);
            }

        }
        if (i%4==0){
            printf("\n");
        }
    }
   printf("\n");

    int dayOfWeek = getDayOfWeek(year, month, day);

    for(int i=0 ;i<=7;i++){
        if (i==dayOfWeek){
            printf("%s",colorRed);
            printf("%s    ",weekdays[i]);
            printf("%s",colorReset);
        }
        else{
            printf("%s      ",weekdays[i]);
        }
    }

    //printf("Hello, \033[1;31mW\033[0morld!\n");
    
    return 0;
}

