#include <stdio.h>
#include <math.h>

int calculatePow(int n);

int main() {
    int n = 4;
    printf("2 raised to power %d is: %d\n", n, calculatePow(n));
    return 0;
}
int calculatePow(int n){
    if(n == 0) return ;
    return 2* calculatePow(n-1);  // 2^n = 2*2*... n times
}

/*
2 * calculatePow(3)
  → 2 * calculatePow(2)
    → 2 * calculatePow(1)
      → 2 * calculatePow(0) → 1

*/