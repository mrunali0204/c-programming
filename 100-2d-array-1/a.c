#include <stdio.h>

void storeTable(int arr[][10], int row, int num) {
    for (int i = 0; i < 10; i++) {
        arr[row][i] = num * (i + 1);
    }
}

void printTable(int arr[][10], int rows) {
    for (int i = 0; i < rows; i++) {
        printf("Table of %d: ", arr[i][0] / 1);  // Just for label
        for (int j = 0; j < 10; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tables[2][10];

    storeTable(tables, 0, 2);  // Table of 2
    storeTable(tables, 1, 3);  // Table of 3

    printTable(tables, 2);

    return 0;
}
