#include<stdio.h>
int reverseNum(int n, int rev);
int main(){
    int n = 97145;
    int rev =0;
    printf("the reverse is: %d", reverseNum(n, rev));
}
int reverseNum(int n, int rev){
    if(n == 0) return rev;
    return reverseNum(n/10, rev*10 + n%10);
}