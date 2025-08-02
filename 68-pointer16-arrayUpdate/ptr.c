#include<stdio.h>

int main() {
    int arr[3] = {5, 10, 15};
    int *ptr = arr;

    for(int i = 0; i < 3; i++) {
        printf("Address of arr[%d] = %p\n", i, (ptr + i));
    }

    return 0;
}
