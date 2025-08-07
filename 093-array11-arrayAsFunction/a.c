#include<stdio.h>

void printNum(int arr[], int n);

int main(){
    int arr[] = {1,32,3,45,5};
    printNum(arr, 5);
    return 0;
}

void printNum(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t ", arr[i]);
    }
    printf("\n");
}