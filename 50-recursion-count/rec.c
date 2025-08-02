#include<stdio.h>
int countDigit(int n);
int main(){
    int n = 3248;
    printf("count is: %d", countDigit(n));
}
int countDigit(int n){
    if(n==0) return 0;
    return (1 + countDigit(n/10));
}