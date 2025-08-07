#include<stdio.h>
int main(){
    int add;
    int sub;
    int multiply;
    int divide;

    int a = 10;
    int b = 5;
    printf("Choose one \n 1. add \n 2. sub \n 3. multiply \n 4. divide \n");
    scanf("%d", &add, &sub, &multiply, &divide);
    
    if(1){
        printf("add %d", a + b);
    }
    else if (2){
        printf("sub", a -  b);
    }
    else if (3)
    {
        printf("multiply",  a *  b);
    }
    else{
        printf("divide",  a %  b);
    }

    printf()

}