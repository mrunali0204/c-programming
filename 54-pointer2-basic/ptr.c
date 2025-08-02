#include<stdio.h>
int main(){
    int a = 19;
    int *ptr = &a;
    printf("value of a: %d\n", a);
    printf("address of a: %d\n" , &a);
    printf("address stored in ptr: %p \n" , ptr); // %p
    printf("value at ptr: %d \n" , *ptr);
    return 0;
}