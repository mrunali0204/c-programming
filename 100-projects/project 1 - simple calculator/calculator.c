#include<stdio.h>
int main(void)
{   

    int choose;
    printf("choose one from the following : \n");
    printf("1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n 6.  : \n");
    scanf("%d", &choose);

    int iNo1, iNo2;
    printf("enter the two values : \n");
    scanf("%d%d", &iNo1, &iNo2);


    return 0;
}

