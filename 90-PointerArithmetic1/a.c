#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u %u , difference = %u\n", ptr - _ptr, ptr, _ptr); //we can sub one pointer from another
    _ptr = &age;
    printf("comparision = %u\n", ptr == _ptr); //we can compare pointers by  "== "
    return 0;
}