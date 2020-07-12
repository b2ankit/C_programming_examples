/*Step 1: 
    -> write a program that creates a structure pointer and passes it to a function
        create a structure named item with the following members
        itemName-pointer
        quantity-int
        price-float
        amount-float(stores quantity *price)

    -> create a function named readitem that take a structure pointer of type
        item as a parameter
        this function should read in (from the user) a produnct name,price and quantity

    ->create a function named print item that takes as a prameter a structure
    pointer of type item
        function prints the content of the parameter

*/  


/* Step 2 :
        -> the main function should decalre an item and a pointerto the iem
            you will need to allocate memory for the itemName pointer
            the item pointer should be passed into both the read and print item func.

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

struct store_bill
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};


void readitem(struct store_bill *bill){
    printf("Enter the item name : ");
    scanf("%s",bill->itemName);
    printf("Eter the quantity : ");
    scanf("%d",&bill->quantity);
    printf("Enter the price : ");
    scanf("%f",&bill->price);
    bill->amount = (bill->price * bill->quantity);
}

void display_bill(struct store_bill *bill){
    printf("\n*********************Your bill*********************\n");
    printf("Item name : %s\nQuantity : %d\nPrice : %f\nTotal amount : %f\n",bill->itemName,bill->quantity,bill->price,bill->amount);
}


int main(){
    
    struct store_bill bill1;
    struct store_bill *pt_item;
    pt_item = &bill1;

    pt_item->itemName=(char *)malloc(30*sizeof(char));
    readitem(&bill1);
    display_bill(&bill1);

    return 0;
}