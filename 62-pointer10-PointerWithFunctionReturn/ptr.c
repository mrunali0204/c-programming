#include<stdio.h>

int * getPointer();

int main(){
    int *ptr = getPointer();
    printf("%d \n", *ptr);  
    return 0;
}

int * getPointer(){
    static int x = 100;
    return &x;
}
