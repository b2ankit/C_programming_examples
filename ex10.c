/*Step 1: 
    ->1. write a program that sorts the string of an array using bubble sort
        input number of string : 3
        input string 3 : 
        zero
        one 
        two


        expected output:
        These appears after sorting
        one
        two
        zero

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
#include<stdbool.h>


int main(){
    
    char string_array[25][50];
    char temp[50];
    int n;
    printf("input number of string : ");
    scanf("%d",&n);
    printf("\n***************************************\n");
    for(int i=0;i<n;i++){
        printf("input string %d : ",i+1);
        scanf("%s",string_array[i]);
    }

    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++){
        if(strcmp(string_array[i],string_array[i+1])>0){
            strcpy(temp,string_array[i]);
            strcpy(string_array[i],string_array[i+1]);
            strcpy(string_array[i+1],temp);
        }

    }

    }



    printf("\n***************************************\n");
     for(int i=0;i<n;i++){
        printf("String %d : %s\n",i+1,string_array[i]);
    }

    
 
    return 0;
}