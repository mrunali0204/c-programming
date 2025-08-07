#include<stdio.h>
#include<math.h>

void calculateSquare(int n);

int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    calculateSquare(n); //call function

    return 0; 
}
void calculateSquare(int n){
    printf("the square is %d", n*n);    //not written return , thats why use VOID for this function
}

/*

#include<stdio.h>
#include<math.h>

int calculateSquare(int n);

int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int square =calculateSquare(n); //call function
    printf("the square is %d", square);

    return 0;
}
int calculateSquare(int n){
    int square = n * n;
    printf("the square is %d", n*n);    
}

*/