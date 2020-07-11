/*write a c program to copy one from another*/

#include<stdio.h>
#include<stdlib.h>

void copy_string(char *s1, char *s2){
    while(*s1){
        *s2++=*s1++;
    }
    *s1='\0';
}

int main(){
char string1[] = "copy into other string";
char string2[40];

    copy_string(string1,string2);
    printf("string2 : %s \n",string2);
    return 0;
}
