#include<stdio.h>
int main(){
    //char
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}

/*
output
ptr = 1163918919
ptr = 1163918920
ptr = 1163918919
*/

//ptr++
//ptr = ptr + 1 -> 1 datatype increment, 1 bytes * 1 = 1 for char