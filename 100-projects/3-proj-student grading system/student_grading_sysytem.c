#include<stdio.h>

int main(void)
{
    int marks[5];
    int stud;

    printf("Enter number of students: \n");
    scanf("%d", &stud);

    printf("Enter marks for English, Maths, Physics, Chemistry, Biology for each student: ");

    while(marks < 6)
    {
        printf("Enter marks for each subject: \n");
        scanf("%d", &marks[5]);
    }

    printf("%d", marks[]);
    // if(marks > 100)
    // {
    //     printf("Number is too High\n");
    // }
    // else if(marks < 100)
    // {
    //     printf("Number is too Low\n");
    // }
    // else{
    //     printf("Invalid");
    // }

    return 0;
}