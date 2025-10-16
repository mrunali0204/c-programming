#include<stdio.h>
#include<math.h>

int main(void)
{

    int iChoose;
    int iNo1;            //declare here bcoz old compiler gives error
    int iNo2;

    printf("choose one from the following : \n");
    printf("1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n 6. Square\n 7. SquareRoot \n");
    scanf("%d", &iChoose);

    //int iNo1;           //calculator.c(15) : error C2143: syntax error : missing ';' before 'type'
    //int iNo2;          //calculator.c(16) : error C2143: syntax error : missing ';' before 'type'
    printf("enter the two values : \n");
    scanf("%d%d", &iNo1, &iNo2);

    switch(iChoose){
        case 1:
        printf("1. Addition of two values : %d\n", iNo1 + iNo2);
        break;

        case 2:
        printf("2. Substraction of two values : %d\n", iNo1 - iNo2);
        break;
        
        case 3:
        printf("3. Multiplication of two values : %d\n", iNo1 * iNo2);
        break;
        
        case 4:
        printf("4. Division of two values : %d\n", iNo1 / iNo2);
        break;

        case 5:
        printf("5. Modulus of two values : %d\n", iNo1 % iNo2);
        break;

        case 6:
        printf("6. Square of two values : %d\n", iNo1 * iNo1, iNo2 * iNo2);
        break;

        case 7:     
        printf("7. SquareRoot of two values : %d\n", sqrt(iNo1), sqrt(iNo2));   //sqrt
        break;

        default:
        printf("Invalid");
        break;
        
    }

    return 0;
}


