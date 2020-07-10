/*Step 1: 
    ->1. write a program that  create an integer variable with a hard-coded value . Assign that variables address to a pointer variable


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


int main(){
    printf("\n***************************************\n");
    printf("Intialziation of variables\n");
    printf("number : integer\n");
    printf("pt_number:integer pointer\n");
    printf("\n***************************************\n");
    int number=10;
    int *pt_number=NULL;
    pt_number=&number;

    printf("\n***************************************\n");
    printf("Address of number  : %p\n",&number);
    printf("Address of pt_number : %p\n",&pt_number);
    printf("value of number : %d\n",number);
    printf("value of pt_number : %p\n",pt_number);
    printf("value of number through pt_numer %d\n",*pt_number);
    printf("size of number : %zu\n",sizeof(number));
    printf("size of pt_number : %zu\n",sizeof(pt_number));
    printf("\n***************************************\n");






    
    
 
    return 0;
}