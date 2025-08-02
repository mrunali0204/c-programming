#include<stdio.h>
int fact(int n);
int main(){
    int n = 3;
    printf("the factorial is : %d", fact(n));

}
int fact(int n){
    if(n == 0) return 1;  
    // 2 = 1 . 2
    // n = n-1 . n
    int fact1 = fact(n-1) * n;
    return fact1;
}

//int fact1 = fact(n-1) * n;
//return fact1;
// can do this but easy is direct -> return fact = fact(n-1) * n;