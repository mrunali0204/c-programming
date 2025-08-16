#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {107, 9.3, "mru"};
    struct student * ptr = &s1;
    
    printf("%d\n", (*ptr));
    printf("%d\n", (*ptr).roll);
    printf("%f\n", (*ptr).cgpa);
    printf("%s\n", (*ptr).name);
}

/*
1430255280
107
9.300000
mru
*/