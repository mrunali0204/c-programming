#include<stdio.h>
int main(){
    int a;
    printf("type any number ");
    scanf("%d" , &a);
    if(a%2 == 0){
        printf("even");
    }
    else{
        printf("odd");
    }
}