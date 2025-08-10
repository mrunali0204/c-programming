#include<stdio.h>
#include<math.h>

int calculatePower(int n, int m){
    return pow(n,m);
}

int main(){
    int n=7;
    int m = 3;
    printf("%d",calculatePower(n,m));
}
