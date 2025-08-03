#include<stdio.h>
int main(){
    float price[] = {23, 24, 53};
    printf("total price 1: %f\n", price[0]+(0.81*price[0]));
    printf("total price 2: %f\n", price[1]+(0.81*price[1]));
    printf("total price 3: %f\n", price[2]+(0.81*price[2]));

    return 0;
}
