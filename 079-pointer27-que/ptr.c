#include<stdio.h>
void printAddress(int *n);
int main(){
    int n =9;
    printAddress(&n);
    printf("the address is %d\n", &n);
    return 0;
}
void printAddress(int *n){
    printf("the address is %d\n", n);
}
//call by ref
/*
the address is -1193281812
the address is -1193281812
*/