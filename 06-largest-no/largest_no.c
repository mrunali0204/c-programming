#include<stdio.h>
int main(){
    int a, b, c;
    printf("type any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);  //% is format specifier
    if(a>b && a>c){
        printf("a is greater");
    }
    else if (b>a && b>c){
        printf(" b is greater");
    }
    else{
        printf("c is greater");
    }
    
}