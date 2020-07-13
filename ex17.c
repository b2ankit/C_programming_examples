/*Step 1: 
    -> write a program to find the total number of lines in a text file
        create a file that contain some lines of text
        open your test file
*/  


/* Step 2 :
        -> use the fgetc function to parse characters in a file until you get to the EOF
            if EOF increment counter

            display as output the total number of lines in the files

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

 char *fs_path = "./test.txt";
 char *fs_mode = "r";

int line_fscount(FILE *fp){
    int line_counter=1; 
    char c;
    fp = fopen(fs_path,fs_mode);
    if(!fp)
        printf("file pointer is failed to open \n");
    for(c=getc(fp);c!=EOF;c=getc(fp)){
        if(c=='\n')
            line_counter++;
    }
   fclose(fp);

    return line_counter;

}

int main(){
    FILE *file_pointer =NULL;
    printf("No. of Lines in file is : %d\n",line_fscount(file_pointer));
    return 0;
}