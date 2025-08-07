
//imp
//see once

#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("type any number: ");
    scanf("%d", &n);
    if(n<=1){
        printf("factorial is 1 ");
    }
    else{
        for(int i=1; i<=n; i++){
            fact = fact*i;
        }
        printf("factorial is %d", fact);
    }
}