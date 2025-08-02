#include<stdio.h>
int add(int a, int b);
int main(){
    int a=10, b = 8;  
    printf("sum is : %d \n", add( a, b));  
}
int add(int a, int b){
    if(b==0){
        return a;
    }
    return add(a+1, b-1);
}