#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char user_string[10];
    int extend_mem;

    printf("Enter the string : ");
    scanf("%s",user_string);
    printf("if you want to extend from 10*sizeof(char): ");
    scanf("%d",&extend_mem);

    char *str;
    str = (char *)malloc(10*sizeof(char));
    if(!str){
        printf("Memory allocation is failed\n");
    }
    strcpy(str,user_string);
    /*reallocating the memory*/
    if(extend_mem>0){
         char extend_string[20];
        printf("Enter the extend string : \n");
        scanf("%s",extend_string);
        str = (char *)realloc(str, (extend_mem)*sizeof(char));
        if(!str){
            printf("Memory reallocation is failed\n");
        }
        strcat(str,extend_string);
    }
    


    printf("your enter String is : %s\n",str);
    return 0;
}