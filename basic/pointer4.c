#include<stdio.h>
#include<stdlib.h>

int main(){

    int x =10;
    int y = 100;
    int *const pointer_num = &x;
    printf("Value of x : %d\n",*pointer_num);
    // pointer_num=&y;
    // printf("Modified value of x using pointer : %d\n",*pointer_num);  
    /* we can't chnage the pointer address 
    */

    return 0;
}