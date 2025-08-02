#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int count;
    printf("type a number: ");
    scanf("%d", &n);
    if(n<=1){
        printf("not prime");
    }
    else{
        for(int i =2; i*i <= n; i++){ //cant write root n so write i*i = n
            if (n % i == 0){
                count++;
            }
        }
        if(count>1){
            printf(" prime");
        }
        else{
            printf("not prime");
            }
    }
}