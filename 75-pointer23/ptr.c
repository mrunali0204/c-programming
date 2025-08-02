#include <stdio.h>

// Function definition
void multiplyBy5(int *x) {
    *x = (*x) * 5;  // Multiply the value at address x by 5
}

int main() {
    int a = 6;

    multiplyBy5(&a);  // Pass address of a

    printf("Updated value of a: %d\n", a);  // Output: 30

    return 0;
}
