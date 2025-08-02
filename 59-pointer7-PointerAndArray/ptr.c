#include<stdio.h>
int main(){
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    
    printf("%d \n", *ptr);
    printf("%d \n", *(ptr + 1)); 
    printf("%d \n", *(ptr + 2)); 
    return 0;
}