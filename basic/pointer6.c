#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name[] = "pointer6";
    char *p = name;

    printf("String is  \t address using pointer \t address using array\n");
    for(int i=0;i<strlen(name);i++){
        printf("  %c\t\t",*(p+i));
        printf(" %zu \t",p+i);
        printf(" %zu\n",&name[i]);
    }
    printf("\n");
}