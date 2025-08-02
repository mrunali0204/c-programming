#include<stdio.h>
int main(){
    int a = 9;
    int *ptr = &a;
    *ptr = 98;
    printf("updated value: %d \n", a); 
    return 0;
}