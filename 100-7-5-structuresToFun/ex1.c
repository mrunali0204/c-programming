#include<stdio.h>
#include<string.h>

//void printInfo(struct student s1);  if this written here will give ERROR

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {107, 9.5,"mrunali"};
    printf("student roll = %d \n",s1.roll);
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("student info : \n");
    printf("student roll = %d \n",s1.roll);
    printf("student cgpa = %f \n",s1.cgpa);
    printf("student name = %s \n",s1.name);
}
