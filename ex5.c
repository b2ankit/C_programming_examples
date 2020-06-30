/*Step 1: 
    -> Create a C Program that Calculate your weekly pay
    -> The Program should ask the user to enter the number of hours worked in a 
        week via keyboard
    -> The Program should display as output the gross pay, the taxes, and the net pay

    -> Assumptions : 
        Basic pay rate = $12.00/hr
        Overtime(in excess of 40 hrs)
        Overtime Rate = $18.00/hr
        Tax Rates:
            15% of first $300
            20% of the next $150
            25% of the rest 
*/


/* Step 2 :
        -> we have to use if/else statement
        -> week hours should be int.


    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>

int main(){

    // /*

    int total_week_hrs;
    int basic_pay_rate = 40;
    float net_pay,gross_pay,taxes;
    printf("Enter total working hours of week\n");
    scanf("%d",&total_week_hrs);

    if(total_week_hrs<=40)
        gross_pay = total_week_hrs*12;
    else
        gross_pay = ((total_week_hrs-40)*18)+(40*12);
    
    if(gross_pay<=300)
        taxes = (gross_pay *(.15));
    else if(gross_pay >300 && gross_pay<=450)
        taxes = (((gross_pay-300)*(.2)) + (300*(0.15)));
    else
        taxes = (((gross_pay-450)*(.25)) + (300*(.20)) + (150*(0.15)));

    net_pay = gross_pay - taxes;
    // printf("Gross Pay : %f\n",gross_pay);
    // printf("Taxes : %f\n",taxes);
    // printf("Net Pay %f\n",net_pay);

    // */


  
//step 6: 
    printf("Gross Pay : %f\nTaxes : %f\nNet Pay : %f\n",gross_pay,taxes,net_pay);

  
    return 0;
}