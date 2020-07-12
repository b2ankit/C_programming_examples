#include<stdio.h>
#include<stdlib.h>


int main(){

    struct date{
        int day;
        int month;
        int year;
    };

    struct date today;
    struct date *pt_date = NULL;
    pt_date = &today;

    pt_date->day=12;
    pt_date->month=07;
    pt_date->year=2020;

    printf("Today date is : %d|%d|%d\n",pt_date->day,pt_date->month,pt_date->year);



    return 0;
}