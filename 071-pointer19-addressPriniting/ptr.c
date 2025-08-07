#include<stdio.h>
int main(){
    int a =10;
    int *ptr = &a;

    printf("address of variable using %d(wrong format specifier) : %d\n", &a); //%d is wrong format specifier use %p for address
    printf("address of variable using %p (correct format specifier): %p\n", &a);

    printf("the value of variable using pointer(for value write ptr not *ptr) is : %d\n", ptr);
    printf("the value of variable using pointer is : %p\n", ptr);

    printf("address stored in pointer(using %d - wrong format specifier): %d\n", *ptr);
    printf("address stored in pointer(using %p - which is correct format specifier): %p\n", *ptr);

    /*
    int b = 9;
    int ptr1 = &b; -> here without * cant store address in another variable
    //printf("the value of variable using pointer is : %d\n", ptr1);
    printf("address of variable: %d\n", &b);
    printf("address of variable: %d\n", ptr1);
    printf("address stored in pointer: %p\n", ptr1);
    */

}

/*

the value of variable using pointer is : 10
address of variable: 979369604
address stored in pointer: 000000000000000A    

*/