#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            int i = i+1;
            printf("%d ",i);
        
        }printf("\n");
    }
}