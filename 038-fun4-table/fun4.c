#include<stdio.h>

void table(int n);  //changed to void because we just want to print


int main(){
    int n;
    printf("enter the value of n: ", n);
    scanf("%d", &n);

    printf("Table of %d is:\n", n);
    table(n); // Call the function
    return 0;

}

void table(int n){
    for(int i=1; i<=10; i++){
        int s = n*i;             // or  printf("%d x %d = %d\n", n, i, n * i);
        printf("%d \n",s);
    }
}

