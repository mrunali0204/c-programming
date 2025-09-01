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
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
    
    int count = 1; // not 0 - seeing current elem is 1
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1]){
            count++;

            //printf("%d occurs %d times \n", arr[i], count ); cant write this here it will print again and again
        }
        //printf("%d occurs %d times \n", arr[i], count ); cant write this here shows error 

        else{
            printf("%d occurs %d times \n", arr[i], count ); //write here-  we’ve reached the end of this number’s streak
            count = 1;
        }
        
    }
}