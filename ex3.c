/*Step 1: 
    -> Create a C program that converts the number of mintues to days and year
    -> The Program should ask the user to enter the number of minutes via terminal
    -> The Program Should display as output the minutes and then its equivalent in years and days
    
*/

/* Step 2 :
   -> The should create variables to store (should all be of type double)
    -> Minutes(int)
    -> Minutes in year
    -> Minutes in Days
    -> Years
    -> Days


    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>

int main(){

    int minutes;

   /* 
   double min_in_a_year,min_in_a_day,total_days,total_years;
    printf("Enter Minutes : ");
    scanf("%d",&minutes);


    min_in_a_day = (60*24);
    min_in_a_year = (60*24*365);

    total_days = ((double)minutes)/min_in_a_day;
    total_years = ((double)minutes)/min_in_a_year;

    printf("\nMinutes : %d\n",minutes);
    printf("No. of Days : %lf\n",total_days);
    printf("No. of Years : %lf\n",total_years);

    */

   printf("Enter Minutes : ");
   scanf("%d",&minutes);
   printf("\nMinutes : %d\nNo. of Days : %lf\nNo. of Years : %lf\n",minutes,(((double)minutes)/(60*24)),(((double)minutes)/(60*24*365)));

    return 0;
}