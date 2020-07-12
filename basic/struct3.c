#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct family
    {
        char *name;
        char *father_name;
        char *mother_name;
        int age;
    };

int cmp_cousin(struct family f1, struct family f2){
    if(!strcmp(f1.mother_name,f2.mother_name )||!strcmp(f1.father_name,f2.father_name)){
        return 1;
    }

    return 0;

}

int main(){
    struct family family1,family2;
    family1.name="Alpha";
    family1.mother_name="Gamma";
    family1.father_name="Theta";

    family2.name = "Beta";
    family2.mother_name="Gamma";
    family2.father_name="Theta";
    if(cmp_cousin(family2,family1)){
        printf("Both are %s and %s are Brother\n",family1.name,family2.name);
    }
    else{
        printf("Both are friend\n");
    }
    return 0;
}
