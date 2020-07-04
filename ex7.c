/*Step 1: 
    -> Create a program that will find all the prime number from 3-100
    -> There will np input to the Program
    -> The output will be each prime number separated by a space on a single line
    -> You will need to create an array that will store each prime number as it is generated
    -> You can hard-code the first two prime numbers (2 and 3) in the primes array
    -> you should utilize loops to only find prime number up to 100 and a loop to print out the 
        primes array
*/


/* Step 2 :
        -> identify a prime number
        -> copy the prime number into array 



    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
 
 
    // /*
        // int prime_number_array[30]={[0]=2,[1]=3,};
        int prime_number_array[30];
        prime_number_array[0]=2;
        prime_number_array[1]=3;
        int current_array_length=2;
        bool set_flag = true;
        
        for(int i=4;i<101;i++){
            for(int j=2;j<i;j++){
                if(i % j==0){
                    set_flag = false;
                    break;
                }
                set_flag = true;
            }
            if(set_flag){
                    prime_number_array[current_array_length]=i;
                    current_array_length++;
                    set_flag=1;
                }
        }
        printf("prime numbers upto 100 : ");
        for(int i=0;i<current_array_length;i++){
            printf("%d\t",prime_number_array[i]);
        }
        printf("\n");
    

    // */
    //step 6 :
    // int prime_number_array[30]={[0]=2,[1]=3,};

        // same as above   
    return 0;
}