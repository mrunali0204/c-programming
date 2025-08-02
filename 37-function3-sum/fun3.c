#include<stdio.h>

int sum(int a, int b);  //telling compiler sum is function

int main(){
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    //int s = sum( a,b);       //stored sum in s 
    //sum(a,b);  this line here does nothing so we dont write this
    printf("sum is: %d \n", sum(a,b));
    

}

int sum(int a, int b){
    return a + b;         // return result properly,  //printf("%d",a + b);  -> give this o/p  : "6sum is: 1"
}