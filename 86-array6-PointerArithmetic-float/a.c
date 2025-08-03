#include<stdio.h>
int main(){
    //float
    float age = 22;
    float *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}

//ptr++
//ptr = ptr + 1 -> 1 datatype increment, 4 bytes * 1 = 4 for float