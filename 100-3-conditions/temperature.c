#include<stdio.h>
int main(){
    float temp;
    printf("enter temperature: ");
    scanf("%f", &temp);
    if (temp<0) printf("freezing");
    else if (0 <= temp && temp < 20) printf("cold");
    else if (20 <= temp  && temp < 30) printf("warm");
    else printf("hot");
}