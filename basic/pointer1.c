#include<stdio.h>
#include<stdlib.h>

int main(){

    long num1 = 0L;
    long num2 = 0L;
    long *pt_num=NULL;
    
    pt_num=&num1;
    *pt_num=2L;
    ++num2;
    num2+=*pt_num;

    pt_num = &num2;
    ++*pt_num;



    printf("num1 : %ld\t num2 : %ld\t *pt_num : %ld\t *pt_num + num2 = %ld\n",
        num1,num2,*pt_num,*pt_num+num2);
    
    return 0;
}
