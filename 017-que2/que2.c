#include<stdio.h>
int main(){
    int n = 123;
    int count=0;
    int temp = n;
    while(temp!=0){
        count++;
        temp = temp/10;
    }
    printf("%d",n, count);
    return 0;
}