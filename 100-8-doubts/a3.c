//how to use return multiple values

#include<stdio.h>
void getValue(int *x, int *y){
    *x = 10;
    *y = 8;
}

int main(){
    int a,b;
    getValue(&a, &b);
    printf("a = %d, b =%d\n", a, b);
    return 0;
}