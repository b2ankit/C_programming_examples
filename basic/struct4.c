#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct family
{   
    char *name;
    char *father_name;
    char *mother_name;
};

int cmp_cousin(struct family *pt1,struct family *pt2){
    if(!(strcmp(pt1->mother_name,pt2->mother_name)||!strcmp(pt1->father_name,pt2->father_name))){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    struct family family1,family2,*pt_family1, *pt_family2;
    pt_family1=&family1;
    pt_family2=&family2;
    pt_family1->name = "Alpha";
    pt_family1->father_name = "Gamma";
    pt_family1->mother_name = "Theta";

    pt_family2->name = "Beta";
    pt_family2->father_name = "Gamma";
    pt_family2->mother_name = "Theta";

    if(cmp_cousin){
        printf("Both %s and %s are Brother\n",pt_family1->name,pt_family2->name);
    }
    else{
        printf("Both %s and %s are not Brother\n",pt_family1->name,pt_family2->name);
    }

    return 0;
}
