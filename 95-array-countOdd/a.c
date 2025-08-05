#include<stdio.h>

int countOdd(int arr[], int n);

int main(){
    int arr[] = {1,8,4,5,6,7};
    //countOdd(arr, 6);
    printf("%d", countOdd(arr, 6));
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i =0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}