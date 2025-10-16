#include<stdio.h>
int main(void)
{   

    int choose;
    printf("choose one from the following : \n");
    printf("1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n 6. Square\n 7. SquareRoot \n");
    scanf("%d", &choose);

    int iNo1, iNo2;
    printf("enter the two values : \n");
    scanf("%d%d", &iNo1, &iNo2);

    switch(choose){
        case '1':
        printf("1. Addition of two values : ", iNo1 + iNo2);
        break;

        case '2':
        printf("2. Substraction of two values : ", iNo1 - iNo2);
        break;
        
        case '3':
        printf("3. Multiplication of two values : ", iNo1 * iNo2);
        break;
        
        case '4':
        printf("4. Division of two values : ", iNo1 / iNo2);
        break;

        case '5':
        printf("5. Modulus of two values : ", iNo1 % iNo2);
        break;

        case '6':
        printf("6. Square of two values : ", iNo1 * iNo1, iNo2 * iNo2);
        break;

        case '7':     
        printf("7. SquareRoot of two values : ", sqrt(iNo1), sqrt(iNo2));   //sqrt
        break;

        case '8':
        printf("Invalid");
        break;
        
    }

    return 0;
}

