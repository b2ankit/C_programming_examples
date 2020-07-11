/*Step 1: 
    ->1. write a c program that should takes as parameter a const char string
        determine the length of the string using const char pointer 


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

int strlen_using_pointer(const char * s1){
    int count=0;
    while(*s1)
    {
        count++;
        ++s1;
    }
        
    return(count);
}


int main(){
    const char *string_s1 = "Hello";
    const char *string_s2 = "world";
    const char *string_s3 = "Hello World";

    printf("The length of String is : %d\n",strlen_using_pointer(string_s1));
    printf("The length of String is : %d\n",strlen_using_pointer(string_s2));
    printf("The length of String is : %d\n",strlen_using_pointer(string_s3));
    return 0;
}