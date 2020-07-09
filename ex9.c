/*Step 1: 
    ->1.  write a function to count the number of character in a string(length).
    ->2. write a function to concatenate two character in a string
    ->3. write a function to that determine if two string are equal.

    Note : can't use library function

*/  


/* Step 2 :
        -> 1. function should take a character array as parameter return an int
        -> 2. function should take 3 parameter char result[],const str1[],const str2[] return void.
        -> 3. function should take two const array as parameter and return a boolean of true if they are equal and false otherwise

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

int str_len(char str[]){
    int count =0;
   
    while(str[count]!='\0'){
        count++;
    }
    return(count);
}

void str_cat(char str1 [],char str2[]){
    int str1_len = str_len(str1);
    int str2_len = str_len(str2);
    char str_result[str1_len+str2_len+1];
    int count1 = 0,count2=0;
    while(str1[count1]!='\0'){
        str_result[count1]=str1[count1];
        count1++;
    }
    count2 =0;
    while(str2[count2]!='\0'){
        str_result[count1+count2]=str2[count2];
        count2++;
    }
    str_result[count1+count2]='\0';
    printf("string str1 + str2  : %s\n",str_result);
}

bool str_cmp(char str1[],char str2[]){
    if(str_len(str1)==str_len(str2)){
        int count = 0;
        while(str1[count]!='\0'){
            if(str1[count]==str2[count])
            {
                return true;
            } 
            else
            {
                return false;
            }
            
        }
    }

    return false;
}

int main(){
    
 
    // /*
    char str1[20];
    char str2[20];
    printf("Enter a string1 : \n");
    scanf("%s",str1);
    printf("Enter string 2 : \n");
    scanf("%s",str2);
    printf("str1 length : %d\n",str_len(str1));
    printf("str2 length : %d\n",str_len(str2));
    str_cat(str1,str2);
    if(str_cmp(str1,str2))
       printf("Both string is same \n");
    else
        printf("Both string is different\n");
    

    // */
    //step 6 :
    return 0;
}