#include<stdio.h>
int main(){
    int num;
    int i = 23145;
    //printf("enter any digit");
    //scanf("%d", &i);
    while(i!=0){
        int num = i%10;
        printf("%d", num);
        i=i/10;
    }
}