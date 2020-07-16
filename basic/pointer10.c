/*  Function pointer implemention using pointer array;

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
    int (*funtion_int_oper)[5]=NULL; 

    int(*funtion_int_oper)[0] = &int_sum;
    int(*funtion_int_oper)[1] = &int_sub;
    int(*funtion_int_oper)[2] = &int_mul;
    int(*funtion_int_oper)[3] = &int_mod;
    int(*funtion_int_oper)[4] = &int_div;
    // int (*sum_ptr)(int,int) = &int_sum;
    // int (*sub_ptr)(int,int) = &int_sub;
    // int (*mul_ptr)(int,int) = &int_mul;
    // int (*mod_ptr)(int,int) = &int_mod;
    // int (*div_ptr)(int,int) = &int_div;
    // int ((*funtion_int_oper(int,int)))[0] = &int_sum;/
    printf("Sum of two number is  : %d\nSub of two number : %d\nMul of two number : %d\nMod of two number : %d\nDiv of two number  : %d\n",sum_ptr(x,y)\
    ,sub_ptr(x,y),mul_ptr(x,y),mod_ptr(x,y),div_ptr(x,y));

    return 0;

}