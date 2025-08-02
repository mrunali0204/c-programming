#include <stdio.h>

//Call by Value: works on a copy
void incrementByValue(int a) {
    a = a + 1;
    printf("Inside incrementByValue: a = %d\n", a);
}

//Call by Reference: works on actual variable using pointer
void incrementByReference(int *a) {
    *a = *a + 1;
    printf("Inside incrementByReference: a = %d\n", *a);
}

int main() {
    int num1 = 5;
    int num2 = 5;

    printf("Before incrementByValue: num1 = %d\n", num1);
    incrementByValue(num1);
    printf("After incrementByValue: num1 = %d\n\n", num1);

    printf("Before incrementByReference: num2 = %d\n", num2);
    incrementByReference(&num2);
    printf("After incrementByReference: num2 = %d\n", num2);

    return 0;
}
