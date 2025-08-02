#include<stdio.h>
int calculateGDC(int a, int b);
int main(){
    int a = 10;
    int b = 6;
    printf("the GDC:  %d", calculateGDC(a,b));
}
int calculateGDC(int a, int b){
    if(b ==0) return a;
    return calculateGDC(b, a%b);
}