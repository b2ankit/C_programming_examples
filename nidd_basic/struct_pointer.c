/* dynamic allocation of struct pointer and axcess all the struct element
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct myfriend{
    char *name;
    int age;
    char *address;
}friend_handle;

int main(){

    friend_handle *ptr_friend_hadle =NULL;
    ptr_friend_hadle = (friend_handle *)malloc(sizeof(friend_handle));
    if(!ptr_friend_hadle)
        printf("memory falied to allocate for ptr_friend_handle\n");

    memset(ptr_friend_hadle,0,sizeof(friend_handle));

    ptr_friend_hadle->name = "Ankit";
    ptr_friend_hadle->age = 23;
    ptr_friend_hadle->address = "Chapra";

    printf("your friend details are : \n");
    printf("Name : %s\nAge : %d\nAddress: %s\n",ptr_friend_hadle->name,ptr_friend_hadle->age,ptr_friend_hadle->address);


    if(ptr_friend_hadle)
        free(ptr_friend_hadle);
    
    printf("memory free successfully\n");



}