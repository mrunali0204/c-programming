#include<stdio.h>
int main(){
    int a=7;
    int *ptr = &a;
    int **pptr = &ptr;
    
    printf("%d \n", *ptr);
    printf("%d \n", **pptr);  
    return 0;
}