/*
    write a c program using pointer increment the variable 
    -> you cann work with addresses
    ->you can work with the values
    ->you can work with pointers
    ->you can work with variables
*/

#include<stdio.h>
#include<stdlib.h>


int increment_with_value(int variable_values){
    return(variable_values+1);
}
void increment_with_variable_address(int *variable_address){
    ++*variable_address;
}
void increment_with_pointer_address(int **pointer_address){
    ++**pointer_address;
}


int main(){

    int x ;
    printf("Enter an interger : ");
    scanf("%d",&x);
    int *pt = &x;

    printf("increment_with_value x : %d\n",increment_with_value(x));
    printf("current values of x : %d\n",x);
    increment_with_variable_address(pt);
    printf("increment_with_variable_address current values of x : %d\n",x);
    printf("current values of x : %d\n",x);
    increment_with_pointer_address(&pt);
    printf("increment_with_variable_address current values of x : %d\n",x);
    printf("current values of x : %d\n",x);

    return 0;
}