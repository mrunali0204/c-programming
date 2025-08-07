#include<stdio.h>
int main(){
    float pi = 3.14;
    float *fptr = &pi;
    printf("value of pi: %.2f \n", *fptr); //%.2f
    return 0;
}