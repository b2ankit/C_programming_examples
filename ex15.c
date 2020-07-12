/*Step 1: 
    -> write a program that declares a structure and printf out it's content
        create an employee structure with 3 members
        .name(character array)
        .hireDate(int)
        .salary(float)

        Read second employee from the console of an employee type first is hard coded


*/  


/* Step 2 :
        -> 

    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
        struct employee{
            char name[20];
            struct hireDate{
                int day;
                int month;
                int year;
            }DOJ;
            float salary;
        };
        
        struct employee emp1={"Alpha",{01,07,2019},50000};
        // emp1.name = "Alpha";
        // emp1.DOJ.day = 1;
        // emp1.DOJ.month=07;
        // emp1.DOJ.year=2019;
        // emp1.salary = 50000.00;
        printf("Details of Employee 1 \n");
        printf(" Name : %s\n DOJ : %d/%d/%d\n salay : %f\n",emp1.name,emp1.DOJ.day,emp1.DOJ.month,emp1.DOJ.year,emp1.salary);

        printf("Enter the Details of Employee 2\n");
        printf("Enter the name : ");
        scanf("%s",emp1.name);
        printf("Enter the day of Joining : ");
        scanf("%d",&emp1.DOJ.day);
        printf("Enter the month of Joining : ");
        scanf("%d",&emp1.DOJ.month);
        printf("Enter the year of Joining : ");
        scanf("%d",&emp1.DOJ.year);
        printf("Enter the salay : ");
        scanf("%f",&emp1.salary);



        
        printf("Details of Employee 2 \n");
        printf(" Name : %s\n DOJ : %d/%d/%d\n salay : %f\n",emp1.name,emp1.DOJ.day,emp1.DOJ.month,emp1.DOJ.year,emp1.salary);
        

    return 0;
}