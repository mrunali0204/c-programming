#include<stdio.h>
int main(){
    int digit;
    int i = 23145;
    //printf("enter any digit");
    //scanf("%d", &i);
    while(i!=0){
        int digit = i%10;
        printf("%d", digit);
        i=i/10;
    }
}