/*Step 1: 
    -> Create a C program that display the byte size of basic data type supported
        in C ( The output varies depending on the system you are running the program)

    -> Display the byte size of the following types
        int
        char
        long
        long long
        double
        long double
*/


/* Step 2 :
        -> You can use the %zd format soecifier to formate each size
        -> Use the sizeof operator
        -> Test on more than one computer to see the differences


    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
*/

// Step 3:

#include<stdio.h>

int main(){

    char char_data;
    int int_data;
    float float_data;
    long long_data;
    long long long_long_data;
    double double_data;
    long double long_double_data;

   /* 
    printf("Data types Size in bytes \n");
    printf("char_data : %zd\n",sizeof(char_data));
    printf("int_data : %zd\n",sizeof(int_data));
    printf("float_data : %zd\n",sizeof(float_data));
    printf("long_data : %zd\n",sizeof(long_data));
    printf("long_long_data : %zd\n",sizeof(long_long_data));
    printf("double_data : %zd\n",sizeof(double_data));
    printf("long_double : %zd\n",sizeof(long_double_data));
    */


  
//step 6: 
    printf("Data types Size in byte \nchar_data : %zd\nint_data : %zd\nfloat_data : %zd\nlong_data : %zd\nlong_long_data : %zd\ndouble_data : %zd\nlong_double : %zd\n",
    sizeof(char_data),sizeof(int_data),sizeof(float_data),sizeof(long_data),sizeof(long_long_data),sizeof(double_data),sizeof(long_double_data));


  
    return 0;
}