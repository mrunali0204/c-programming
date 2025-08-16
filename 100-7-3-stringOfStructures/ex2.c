#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1= { 107, 8.3,"mru"};
    struct student s2= { 109, 8.31,"rakhi"};
    struct student s3= { 106, 8.5,"tarkesh"};

    printf("cgpa of s1 is %f\n",s1.cgpa);
    printf("name of s1 is %s\n",s2.name);
    printf("roll of s1 is %d",s3.roll);
}
