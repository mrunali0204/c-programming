#include<stdio.h>

void CallByValue(int p){
    p;
}
int main(){
    int a = 9;
    CallByValue(a);
    
    //call by reference - change value of a

    printf("value of a is : %d\n", a);

    return 0;
}