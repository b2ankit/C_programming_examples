#include<stdio.h>
#include<stdlib.h>

int main(){

    int x =10;
    int y = 100;
    const int *constant_pointer_num = NULL;
    int *pointer_num = NULL;
    pointer_num=&x;
    constant_pointer_num = &y;
    printf("Value of x : %d\n",*pointer_num);
    printf("Value of x : %d\n",*constant_pointer_num);
    x=20;
    y=200;
    printf("Modified value of x using value: %d\n",*pointer_num);
    printf("Modified value of x using value: %d\n",*constant_pointer_num);
    *pointer_num=30;
    printf("Modified value of x using pointer : %d\n",*pointer_num);

    /* when we using const before pointer we can't modifer the value of 
    variable where the pointer is point*/

    // *constant_pointer_num=300;
    //  printf("Modified value of x using pointer : %d\n",*constant_pointer_num);




    return 0;
}