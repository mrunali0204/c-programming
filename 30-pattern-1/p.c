#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            int sum=i+j;
            if(sum%2 == 0){
                printf("%d", 1);
            }else{
                printf("%d", 0);
            }
        }
        printf("\n");
    }
}
/*
1
01
101
0101
10101
*/