#include<stdio.h>
void swap(int *aptr, int *bptr);

int main(){
    int a = 10, b = 8;
    int *aptr = &a;
    int *bptr = &b;
    printf("%d\n", swap(a,b));
    printf("a is: %d\n", *aptr);
    printf("b is: %d\n", *bptr);
    return 0;

}
void swap(int *aptr, int *bptr){
    int temp = *bptr;
    *bptr = *aptr;
    *aptr = temp;
    

}