 /* Step 1: 
    Requirements
    1. Creating a C program that display the perimeter and area of Reactangle
    2. The program should display the height, width and perimeter variables in the correct 
    formate in print statement

    Step 2 : 
    1. The program should create 4 variable of type double
        -> one variable to store the width of rectangle
        -> one variable to store the height of rectangle
        -> one variable to store the primeter of the rectangle
        -> one variable to store the are of recatngle
    2. Program should perform the claculation for perimeter and area

    step 3 : writing code
    step 4 : compile the program
    step 5 : Run the program
    step 6 : Test and Debug
    step 7 : Maintain and modify the code
 */

#include<stdio.h>

int main(){

    double rectangle_width,rectangle_height,rectangle_perimeter,rectangle_area;

    // step 3 : 
    /*
         printf("Enter the width of Rectangle\n");
         scanf("%lf",&rectangle_width);
         printf("Enter the height of Rectangle\n");
         scanf("%lf",&rectangle_height);

         rectangle_perimeter = (2*(rectangle_width+rectangle_height));
         rectangle_area = (rectangle_width * rectangle_height);

         printf("Rectangle Width : %lf\n",rectangle_width);
         printf("Rectangle Height : %lf\n",rectangle_height);
         printf("Rectangle Perimeter : %lf\n",rectangle_perimeter);
         printf("Rectangle Area : %lf\n",rectangle_area);

        

    */
   
    // step 6:
    printf("Enter the width and height of Rectangle\n");
    scanf("%lf %lf",&rectangle_width,&rectangle_height);
    printf("Rectangle Width : %lf\nRectangle Height : %lf\nRectangle Perimeter : %lf\nReactangle Area : %lf\n",
    rectangle_width,rectangle_height,(2*(rectangle_width+rectangle_height)),(rectangle_width*rectangle_height));

    return 0;
}
