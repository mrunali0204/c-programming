#include <stdio.h>

int main() 
{
    char ch;
    char str[100];
    char sent[100];

    // read a single character
    scanf("%c", &ch);

    // read a string (no spaces)
    scanf("%s", str);

    // read a full sentence (with spaces)
    scanf(" %[^\n]", sent);

    // print outputs
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sent);

    return 0;
}
