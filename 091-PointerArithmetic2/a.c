#include<stdio.h>
int main(){
    int age = 44;
    char _age = 'a';
    int *ptr = &age;
    char *_ptr = &_age;
    printf("%u, %u difference = %u\n", ptr - _ptr, ptr , _ptr);
    return 0;
}

//cant do comparison between different datatypes of pointer
// o/p: invalid operands to binary - (have 'int *' and 'char *')