
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter how many terms you want in Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series is: ");
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);     // print current term
        c = a + b;            // calculate next term
        a = b;                // move one step
        b = c;
    }

}
/*
#include<stdio.h>
int main(){
    int n, a=0,b=1,c;
    printf("type n ");
    scanf("%d", &n);
    printf("fibonacci is:");
    for(int i=1; i<=n; i++){
        printf("%d ", a);
        c = a+b;
        a=b;
        b=c;

    }
}

*/