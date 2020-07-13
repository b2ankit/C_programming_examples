/*Step 1: 
    ->write a program that convert all characters of a file to uppercase and write the
        results out to a temporary file.Then rename all the temporary file to the original
        filename and remove the temporary file
*/  


/* Step 2 :
        -> use the fgetc and fputc functions
        -> use the rename and remove functions
        -> use the islower function
            can convert a charater to upper case by substracting 32 from it. 

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
#include<ctype.h>

#define FILE_PATH "./test.txt"

int copy_in_tempfs(FILE *fp,FILE *ftemp){
    char ch;
    fp = fopen(FILE_PATH,"r");
    if(!fp)
        printf("File %s is failed to open\n",FILE_PATH);
    ftemp = fopen("./temp.txt","w");
    if(!ftemp)
        printf("Temp file is failed to open\n");
    for(ch=getc(fp);ch!=EOF;ch=getc(fp)){
        if(islower(ch))
            ch = ch-32;
        fputc(ch,ftemp);
    }

    fclose(fp);
    fclose(ftemp);

    rename("temp.txt",FILE_PATH);
    remove("./temp.txt");

    return 1;
}

void read_fs(FILE * fp){
    char c;
    fp=fopen(FILE_PATH,"r");
    if(!fp)
        printf("File is failed to open at read time\n");
    for(c=getc(fp);c!=EOF;c=getc(fp)){
        printf("%c",c);
    }
    fclose(fp);
}
int main(){
    FILE *file_pointer =NULL;
    FILE *temp_file_pointer = NULL;

    copy_in_tempfs(file_pointer,temp_file_pointer);
    read_fs(file_pointer);
    printf("\n**********DONE***************\n");



    
    return 0;
}