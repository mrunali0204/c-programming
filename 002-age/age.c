#include<stdio.h>
int main(){
    int age;
    printf("type your age");
    scanf("%d", &age);
    if(age<18){
        printf("you r not an adult");
    }
    else{
        printf("you r an adult");
    }
}