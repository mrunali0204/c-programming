#include<stdio.h>
#include<string.h>

// struct student EE[100];
// struct student ETC[100];
// struct student IT[100];

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    
    struct student EE[100];
    strcpy(EE[0].name , "mrunali");
    EE[0].roll = 101;
    EE[0].cgpa = 8.3;

    printf("student of EE %s\n",EE[0].name);
    printf("student of EE %d\n", EE[0].roll);
    printf("student of EE %f\n", EE[0].cgpa);
  

    struct student ETC[100];
    strcpy(ETC[0].name , "har");
    ETC[0].roll = 104;
    ETC[0].cgpa = 8.9;
    
    printf("student of ETC %s\n",ETC[0].name);
    printf("student of ETC %d\n", ETC[0].roll);
    printf("student of ETC%f\n", ETC[0].cgpa);

    struct student IT[100];
    strcpy(IT[0].name , "mrra");
    IT[0].roll = 107;
    IT[0].cgpa = 8.1;
    
    printf("student of IT %s\n",IT[0].name);
    printf("student of IT %d\n", IT[0].roll);
    printf("student of IT%f\n", IT[0].cgpa);

    return 0;
}