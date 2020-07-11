#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name[] = "print string using pointer";
    char *p = name;

    printf("String is : ");
    for(int i=0;i<strlen(name);i++){
        printf("%c",*(p+i));

    }
    printf("\n");
}