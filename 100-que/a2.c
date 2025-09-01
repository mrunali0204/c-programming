#include<stdio.h>
#include<stdlib.h>

void swapAlternates(int *arr, int n);

int arr[50];
int n;
int main(){
    printf("enter the no. of elements: ");
    scanf("%d", &n);

    printf("enter the elements: ");
    for(int i = 0; i < n ; i++){
        printf("scanning %d:", i);
        scanf("%d", &arr[i]);
    }

    printf("all elements are : ");
    for(int i = 0; i < n ; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
    
    swapAlternates(arr, n);

    printf("after swapping: \n");
    for(int i = 0; i < n ; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void swapAlternates(int *arr, int n){

    for(int i = 0; i < n-1 ; i+=2){
        int *aptr = &arr[i];
        int *bptr = &arr[i+1];

        int temp = *bptr;
        *bptr = *aptr;
        *aptr = temp;
    }


}