#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 107;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Mrunali");

    struct student s2;
    s1.roll = 104;
    s1.cgpa = 9.3;
    strcpy(s1.name, "rakhi");

    struct student s3;
    s1.roll = 102;
    s1.cgpa = 9.8;
    strcpy(s1.name, "harshu");

    printf("student name is %s\n", s1.name, s2.name, s3.name);
    printf("student roll no. is %d\n", s1.roll, s2.roll, s3.roll);
    printf("student cgpa is %f\n", s1.cgpa, s2.cgpa, s3.cgpa);
    
    return 0;
}