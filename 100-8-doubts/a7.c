#include<stdio.h>
int main(){
    int arr[3] = {1,3,5};

    //to print one one elem
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

    //to print all elem at one time
    for(int i=0; i<3; i++){
        printf("%d\n", arr[i]);
    }

    //to direclty calculate size of arr - PRINTS GARBAGE value
    int size = sizeof(arr);
    int size2 = sizeof(arr[0]);

    for(int i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }

    for(int i=0; i<size2; i++){
        printf("%d\n", arr[i]);
    }

    //to direclty calculate size of arr
    int size3 = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size3; i++){
        printf("new %d\n", arr[i]);
    }
}