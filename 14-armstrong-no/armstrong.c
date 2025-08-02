//153 = 1cube + 5 cube + 3 cube = sum of all
#include<stdio.h>
int main(){
    int i = 153;
    int original =i;
    int sum=0;
    while(i!=0){
        int digit = i%10;
        int cube = digit*digit*digit;
        sum = sum+cube;
        i=i/10;
    }
    if(sum == original){
        printf("%d the number is armstrong number", original);
    }
    else{
        printf("%d the number is not armstrong number", original);
    }


}