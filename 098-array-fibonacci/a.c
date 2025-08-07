#include<stdio.h>
int main(){
    int n;
    printf("enter n (n>2): ", &n);
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d %d ", fib[0], fib[1]); //print first two terms
    for(int i =2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
}