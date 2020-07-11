/*Step 1: 
    ->1. write a function that square a number by itself
        .the function should define as a parameter an int pointer


*/  


/* Step 2 :
        -> 

    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int square_int_using_pointer(int *number_address){
    return((*number_address)*(*number_address));
}



int main(){
    int x;
    printf("Enter an Interger: ");
    scanf("%d",&x);
    printf("Square of enter number is : %d\n",square_int_using_pointer(&x));
    return 0;
}