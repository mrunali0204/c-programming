#include <stdio.h>
int main() {
    char c = 'A';               // ASCII 65
    signed char sc = -100;      // -128 to 127
    unsigned char uc = 250;     // 0 to 255

    printf("char: %c (%d)\n", c, c);
    printf("signed char: %d\n", sc);
    printf("unsigned char: %u\n", uc);
    return 0;
}
