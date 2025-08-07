#include<stdio.h>
int main(){
    int a= 9;
    int *ptr = &a;
    // int b = *ptr;

    // int c = &(*ptr); -> this is wrong we cany store address in int c
    int *c = &(*ptr); //-> if we want to store address then declear c as ptr
    //  &(*ptr) == ptr
    printf("%p\n", c);
    
    // printf("%d\n", a);
    // printf("%d\n", &ptr);
    // printf("%d\n", b);
    //printf("%d\n", &(*ptr));
    //printf("%p\n", *ptr);
}