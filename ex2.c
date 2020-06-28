/*Step 1: 
    -> Create a C Program that defines as enum type and use that type to 
    display the values of some variables
    -> Program should create an enum type named company
        Valid values for this type are  : GOOGLE, FACEBOOK, XEROX,YAHOO,EBAY,MICROSOFT

    ->The Program should create three variables of the above enum type that are assigned values:
        XEROX,GOOGLE and EBAY

    -> The Program should display as output, the value of the three variables with each 
        variable separated by a newline

    
    
    
*/

/* Step 2 :
    -> Correct output would be if XEROX,GOOGLE and EBAY variables are printed in that order :
        ->2
        ->0
        ->4 
*/

#include<stdio.h>

enum company_name{
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
};

int main(){

//Step 3 :

    /*
    enum company_name CNAME_XEROX = XEROX;
    enum company_name CNAME_GOOGLE = GOOGLE;
    enum company_name CNAME_EBAY = EBAY;

    printf("XEROX : %d\n",CNAME_XEROX);
    printf("GOOGLE : %d\n",CNAME_GOOGLE);
    printf("EBAY : %d\n",CNAME_EBAY);
    */

    
//Step 6 :

    printf("XEROX : %d\nGOOGLE : %d\nEBAY : %d\n",XEROX,GOOGLE,EBAY);

    return 0;
}