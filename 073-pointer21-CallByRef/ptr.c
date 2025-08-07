#include<stdio.h>

void CallByRef(int *p){
    *p = *p + 10;
}
int main(){
    int a = 9;
    CallByRef(&a);
    
    //call by reference - change value of a

    printf("value of a is : %d\n", a);

    return 0;
}