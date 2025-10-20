#include<stdio.h>

int main(void)
{
    int iNo;
    printf("Enter any number: \n");
    scanf("%d", &iNo);

    if(iNo > 100)
    {
        printf("Number is too High\n");
    }
    else if(iNo < 100)
    {
        printf("Number is too Low\n");
    }
    else{
        printf("Invalid");
    }

    return 0;
}