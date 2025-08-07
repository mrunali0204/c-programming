#include<stdio.h>
int main(){
    //int
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}

/*
output:

ptr = 182450004
ptr = 182450008
ptr = 182450004

here int is 4 byte - so it is incremented by 4 byte for 1 datatype
*/

//ptr++
//ptr = ptr + 1 -> 1 datatype increment, 4 bytes * 1 = 4 for int