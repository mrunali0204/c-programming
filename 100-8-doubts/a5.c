#include<stdio.h>

int factorial(int n){
    if(n ==0){
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}
int main(){
    int num = 4;
    printf("factorial %d is %d",num, factorial(num));
    return 0;
}