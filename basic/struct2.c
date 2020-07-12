#include<stdio.h>
#include<stdlib.h>


int main(){

    struct intPtrs
    {
        int *pt1;
        int *pt2;
    };
    
    struct intPtrs pointers;
    int i1 = 100,i2;
    pointers.pt1 = &i1;
    pointers.pt2=&i2;
    *pointers.pt2=-97;


    printf("i1 = %i *poiners.pt1 = %i\n",i1,*pointers.pt1);
    printf("i2 = %i *poiners.pt2 = %i\n",i2,*pointers.pt2);

    return 0;
}