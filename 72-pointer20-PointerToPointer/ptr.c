#include<stdio.h>
int main(){
    int a = 9;
    int *p = &a;
    int **pp = &p;

    printf("address of a is : %p\n", &a);
    printf("address of a is : %p\n", p);
    printf("address of a is : %p\n", p);
    
    printf("address of pointer is : %p\n", &p);
    printf("address of pointer to pointer is : %p\n", &pp);

    printf("value of a is : %d\n", *p);
    printf("value of pointer to pointer is : %d\n", **pp);

    
}
//Change all %d used for printing addresses to %p.