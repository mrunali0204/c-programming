// %lu -> format specifier used in printf to print a long unsigned integer
// l → stands for “long”
// u → stands for “unsigned” (a number that cannot be negative)

#include<stdio.h>
int main(){
    printf("size of int:  %lu \n", sizeof(int)); //4
    printf("size of float:  %lu \n", sizeof(float)); //4
    printf("size of char: %lu \n", sizeof(char));    //1
    printf("size of double: %lu \n", sizeof(double));   //8

    return 0;
}

