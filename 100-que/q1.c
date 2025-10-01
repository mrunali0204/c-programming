#include<stdio.h>
//ternary operator ex

int marks(int x, int y);
int abs_val(int n);

int main(void){
    int a = 10;
    int b = 7;
    int n = 7;

    printf("%d\n", marks(a,b));
    printf("%d\n",abs_val(n));


}

//ex1
int marks(int x, int y){
    int grade = ( x > y) ? x : y;
}

//ex2 - absolute value
int abs_val(int n){
    int abs_val = ( n >= 0) ? n : -n;
}
