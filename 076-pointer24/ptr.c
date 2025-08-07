#include<stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value of a: %d\n", a);           // 10
    printf("Address of a: %p\n", &a);        // Address of a
    printf("Address stored in ptr: %p\n", ptr); // Same address as &a
    printf("Value pointed by ptr: %d\n", *ptr); // 10 (dereferencing)
    
    return 0;
}
