//19 -> 1 + 9 =10 (1+0=1) ...if 1 is sum then magic number 

#include<stdio.h>
int main(){
    int num  = 19;
    int sum = num;
    
    while(sum>9){
        int temp = sum;
        sum =0;
        while(temp!=0){
            sum = sum + temp %10;
            temp = temp /10;

        }
    }
    if(sum == 1){
        printf("number is magic number");
    }
    else{
        printf("number is not magic number");
    }
}