/*Step 1: 
    -> write a program that allows a user to input a text string.
    The program will print the text that was inputted. The program
    will utilize dynamic memory allocation.


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
#include<string.h>


int main(){
    int n;
    printf("number length of string : ");
    scanf("%d",&n);
    char * string_mem=NULL;
    string_mem = (char *)malloc(n*sizeof(char));
    if(!string_mem)
        printf("memory allocation is failed\n");
    scanf("%s",string_mem);

    printf("Your string : %s\n",string_mem);

    return 0;
}