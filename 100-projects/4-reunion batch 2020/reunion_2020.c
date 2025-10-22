#include<stdio.h>

int main(void)
{
    int iComing;
    int iSum;
    char cStudent[30];

    printf("Enter students is coming(1) or not(0): \n");
    scanf("%d", &iComing);

    iSum = 0;

    if(iComing == 1)
    {   
        
        printf("Enter students name: \n");
        scanf("%s", &cStudent);

        printf("person is coming\n");
        iSum += 1;

        printf("total strength is: %d\n", iSum);
    }
    
    else if (iComing == 0)
    {
        printf("person is not coming\n");
    }

    else
    {
        printf("Invalid\n");
    }

    return 0;

}