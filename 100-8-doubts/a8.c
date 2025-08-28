#include<stdio.h>

int main(){
    int num = 123;
    int sum =0;

    for(int i=0; i<4; i++){
        sum = sum + num % 10; //remainder
        num = num/10;  //
    }

    printf("%d",sum);
    return 0;
}