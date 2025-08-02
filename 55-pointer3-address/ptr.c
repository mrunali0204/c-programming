#include<stdio.h>
int main(){
    int a= 9;
    int *ptr = &a;
    printf("%p\n", ptr);
    printf("%p\n", *ptr);
}