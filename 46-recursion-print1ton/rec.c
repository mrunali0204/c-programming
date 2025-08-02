#include<stdio.h>
int print1ton(int n);
int main(){
    int n = 10;
    printf("print from 1 to n is: %d", print1ton(n));

}
int print1ton(int n){
    if(n == 0) return ;
    printf("%d \n", n);
    print1ton(n-1);
    //printf(print1ton);
}