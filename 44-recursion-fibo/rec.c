#include<stdio.h>
int fib(int n);
int main(){

    printf("fibonacci series is: %d", fib(5));

}
int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    
    return fibNm1 + fibNm2;
}