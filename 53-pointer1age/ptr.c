#include<stdio.h>
int main(){
    int age = 4;
    int *ptr = &age;

    printf("%d\n" , age); //4
    printf("%d\n" , &age); //prints address of age
    printf("%d\n" , ptr); //prints address of age
    printf("%d\n" , &ptr);  //prints value at address ie 4
    return 0;
}