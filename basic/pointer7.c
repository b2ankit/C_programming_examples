/*write a c program to fill and array  using address and print it*/

#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 100


int main(){

    int int_array[MAX_LENGTH],n;
    int *pointer_array=NULL;
    pointer_array=int_array;
    printf("Enter the length of integer array : <100\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",(pointer_array+i));
    }
    printf("Enter array is : \n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(pointer_array+i));
    }
    printf("\n");
    return 0;
}