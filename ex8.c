/*Step 1: 
    -> Create a C program that uses a two-dimensional arrat in a 
    wheather program.
    -> This program will find the total rainfall for each year, the
    average yearly rainfall, and the average rainefall for each month

    -> Input will be a 2D array with hard-coded values for rainfall
    amounts for the past 5year

*/


/* Step 2 :
    The array should have rows and 12 Col
    rainfall amounts can be folating point number



    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>
#include<stdlib.h>


int main(){
 
    float rainfall_data[5][12] = 
                    {
                            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
                            {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
                            {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
                            {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
                            {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
                    };

    float rainfall_yearly[5][1];
    float average_monthly_rainfall[1][12];
    


    for(int i=0;i<5;i++){
        float rainfall_data_temp = 0;
        for(int j=0;j<12;j++){
            rainfall_data_temp  = rainfall_data_temp + rainfall_data[i][j];
        }
        rainfall_yearly[i][1] = rainfall_data_temp;
    }

    for(int i=0;i<12;i++){
        float rainfall_mondata_temp = 0;
        for(int j=0;j<5;j++){
            rainfall_mondata_temp = rainfall_mondata_temp + rainfall_data[j][i]; 
        }
        average_monthly_rainfall[1][i]=(rainfall_mondata_temp/5);
    }
    int strat_year = 2011;
    printf("Rainfall for Each year : \n");
    for(int i=0;i<5;i++){
        printf("%d : ",strat_year);
        printf("%0.2f\n",rainfall_yearly[i][1]);
        strat_year++;
    }

    printf("Monthly averrage : \n");
    for(int i=0;i<12;i++){
        printf("%0.1f\t",average_monthly_rainfall[1][i]);
    }
    printf("\n");
    float total_rainfall_tyears = 0;
    for(int i=0;i<5;i++){
        
        total_rainfall_tyears += rainfall_yearly[i][1];
    }
    printf("average_yearly_rainfall : %0.2f\n",total_rainfall_tyears/5);







                
    // /*

    // */
    //step 6 :

   
    return 0;
}