/*  Function pointer imopoplementaion

*/

#include<stdio.h>
#include<stdlib.h>

int int_sum(int x, int y){
    return(x+y);
}
int int_sub(int x,int y){
    return(x-y);
}
int int_mul(int x,int y){
    return(x*y);
}
int int_mod(int x, int y){
    return(x%y);
}
int int_div(int x, int y){
    return(x/y);
}
int main(){

    int x,y;
    printf("Enter the two integer value : ");
    scanf("%d%d",&x,&y);
    int (*sum_ptr)(int,int) = &int_sum;
    int (*sub_ptr)(int,int) = &int_sub;
    int (*mul_ptr)(int,int) = &int_mul;
    int (*mod_ptr)(int,int) = &int_mod;
    int (*div_ptr)(int,int) = &int_div;
    printf("Sum of two number is  : %d\nSub of two number : %d\nMul of two number : %d\nMod of two number : %d\nDiv of two number  : %d\n",sum_ptr(x,y)\
    ,sub_ptr(x,y),mul_ptr(x,y),mod_ptr(x,y),div_ptr(x,y));

    return 0;

}