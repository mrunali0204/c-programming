#include<stdio.h>
int addByValue(int a, int b){
    return a + b;
}
int addByPtr(int *a, int *b){ //cant use (int &a, int &b)- its in cpp
    return *a + *b;
}

int main(){
    int a = 10, b = 8;
    int *pA = &a;
    int *pB = &b;
    printf("Value of a is: %d\n", a);
    printf("Address of a is: %d\n", &a);
    //printf("Address of a is: %d\n", *a); -> wrong line bcoz is is not pointer
    
    printf("Value of b is: %d\n", b);
    printf("Address of b is: %d\n", &b);
    //printf("Address of b is: %d\n", *b);

    printf("Value of pA is: %d\n", *pA);
    printf("Address of pA (address of a) is: %d\n", pA);
    printf("Dereferencing *pA is %d\n", *pA);

    printf("Value of pB is: %d\n", *pB);
    printf("Address of pB (address of a) is: %d\n", pB);
    printf("Dereferencing *pB is %d\n", *pB);

    printf("Add by value %d\n", addByValue(a,b));
    printf("Add by ptr %d\n", addByPtr(pA,pB));

    return 0;

}
/*
output
Value of a is: 10
Address of a is: -912262020
Value of b is: 8
Address of b is: -912262024
Value of pA is: 10
Address of pA (address of a) is: -912262020
Dereferencing *pA is 10
Value of pB is: 8
Address of pB (address of a) is: -912262024
Dereferencing *pB is 8
Add by value 18
Add by ptr 18

*/