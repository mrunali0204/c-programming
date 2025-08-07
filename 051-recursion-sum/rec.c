//calculate sum of digit of number
#include<stdio.h>
int calculateSum(int n);
int main(){
    int n = 1066;
    printf("sum of digits is: %d", calculateSum(n));
}
int calculateSum(int n){
    if (n==0) return 0;
    return (n%10) + calculateSum(n/10);
}