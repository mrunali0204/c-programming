#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int arr[100];

    printf("enter the number of elements:\n");
    scanf("%d", &n);

    printf("enter elements: ");
    for(int i=0; i<n; i++){
        printf("scanning %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("all elements are : ");
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");

    for(int i = 0; i<n; i++){
        if(arr[i] == arr[i+1]){
            int count = count + 1;
            printf("%d", count);
        }
    }
}