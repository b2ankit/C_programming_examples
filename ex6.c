/*Step 1: 
    -> Create a C Program that Guess the Number 
    -> Your program will generate a random number from 0 to 20
    -> You will then ask the user to guess it
        -> User should only be able to enter number from 0 to 20
        -> The program will indicate to the user if each guess is too high or to low
        -> The player will indicate to the user if they can guess is too high or too low
        -> The player wins the game if they can guess the number within five tries 
*/


/* Step 2 :
        -> output be like : 
            This is a guessing game
            I have chosen a number between 0 and 20 which you must guess

            You have 5 tries left
            Enter a guess: 12
            Sorry, 12 is Worng.My number is less than that

            You have 4 tries left
            Enter a guess: 8
            Sorry, 8 is Worng.My number is less than that

            You have 3 tries left
            Enter a guess: 4
            Sorry, 4 is Worng.My number is less than that

            You have 2 tries left
            Enter a guess: 2
            
            Congratulations. You guessed it!


    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>

int main(){
 int chosen_number,guess_number;
    /*
    printf("Choose a number between 0 to 20 first\n");
    scanf("%d",&chosen_number);
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    for(int i=5;i>0;i--){
        printf("You have %d tries left\n",i);
        printf("Enter a guess : ");
        scanf("%d",&guess_number);
        if(guess_number==chosen_number){
            printf("Congratulations. You guessed it!\n");
            break;
        }
        else if(guess_number>chosen_number){
            printf("Sorry,%d is worng.My number is less than that\n",guess_number);

        }
        else{
            printf("Sorry,%d is worng.My number is greater than that\n",guess_number);

        }
        if(i==1 && guess_number!=chosen_number){
            printf("Sorry. You loss it!\n");
        }

    }

    */


  
//step 6: 

    printf("Choose a number between 0 to 20 first\n");
    scanf("%d",&chosen_number);
    printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess.\n");
    for(int i=5;i>0;i--){
        printf("You have %d tries left\nEnter a guess : ",i);
        scanf("%d",&guess_number);
        if(guess_number==chosen_number){
            printf("Congratulations. You guessed it!\n");
            break;
        }  
        else if(guess_number>chosen_number)
            printf("Sorry,%d is worng.My number is less than that\n",guess_number);
        else
             printf("Sorry,%d is worng.My number is greater than that\n",guess_number);
        if(i==1 && guess_number!=chosen_number)
            printf("Sorry. You loss it!\n");
    }
    return 0;
}