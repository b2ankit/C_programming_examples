/*Wrire a c program using pointer add the element of array*/

#include<stdio.h>
#include<stdlib.h>

int sum_of_array_using_pointer(int array[],int array_length){
    int sum=0,*pt_array;
    pt_array=array;
    for(int i=0;i<array_length;i++)
        sum+=*(pt_array+i);
    return sum;
}

int main(){

    int array_sum[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Sum of array is : %d\n",sum_of_array_using_pointer(array_sum,10));

    return 0;
}