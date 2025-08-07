#include<stdio.h>

void printArr(int arr[], int n);
void reverse(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5};

    // prints the original order of the array (before any changes).
    printf("Original array:\n"); 
    printArr(arr,5);
    reverse(arr,5);
    printf("Reversed array:\n");
    printArr(arr, 5); //second printArr prints the new order (after reversing).
    return 0;
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

void reverse(int arr[], int n){
    for(int i=0; i<n/2 ; i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1] = firstval;
    }
}
