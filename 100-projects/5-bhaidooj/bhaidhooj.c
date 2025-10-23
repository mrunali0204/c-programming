#include<stdio.h>

int main(void)
{
    int iComing;
    int iSum;
    char cBhai[30];

    printf("Enter Bhai is coming(1) or not(0): \n");
    scanf("%d", &iComing);

    iSum = 0;

    if(iComing == 1)
    {   
        
        printf("Enter Bhai name: \n");
        scanf("%s", &cBhai);

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