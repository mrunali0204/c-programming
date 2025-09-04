#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, temp;

    printf("Enter a string: ");
    scanf("%s", str);   // Reads a single word (not spaces)

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
