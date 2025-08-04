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

ptr = 1163918919
ptr = 1163918920
ptr = 1163918919

here int is 4 byte - so it is incremented by 4 byte for 1 datatype
*/

//ptr++
//ptr = ptr + 1 -> 1 datatype increment, 4 bytes * 1 = 4 for int