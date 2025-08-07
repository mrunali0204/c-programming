#include<stdio.h>

int countOdd(int arr[], int n);
int reverse(int arr[], int n);
int printArray(int arr[], int n);

int main(){
    int arr[5] = {1,2,3,4,5};
    reverse(arr, 5);
    printArray(arr, 5);
    return 0;
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstval = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstval;
    }
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}


