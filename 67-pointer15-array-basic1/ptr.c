#include<stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    for(int i = 0; i < 3; i++) {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}
