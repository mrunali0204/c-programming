#include<stdio.h>
#include <stdlib.h>

int main(){
    char* name;

    name = malloc(sizeof(char)*10);
    printf("write your name: ");

    scanf("%s", name);
    
    printf("Hello %s\n", name);
    printf("Address %p\n", name);

    return 0;
}