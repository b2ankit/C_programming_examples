#include<stdio.h>
#include<stdlib.h>


int main(){

    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int *dynamic_pointer = NULL;
    dynamic_pointer = (int *)malloc(n*sizeof(int));
    if(!dynamic_pointer){
        printf("Memory allocation is failed\n");
        return -1;
    }
    printf("Enter the integer value\n");
    for(int i=0;i<n;i++){
        int value;
        scanf("%d",&value);
        *(dynamic_pointer+i) = value;
    }

    printf("Enter value is : ");
    for(int i=0;i<n;i++){
        printf(" %d\t",*(dynamic_pointer+i));
    }
    printf("\n");
    return 0;
}