/*

#include<stdio.h>
int main(){
    int aadhar[5];
    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d", (ptr + i));
    }

    //output
    for(int i =0; i<5; i++){
        printf("%d index = %d\n", i, *(ptr+i));
    }
    return 0;
}

*/
#include<stdio.h>
int main(){
    int aadhar[5];
    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]); //(ptr + i) OR &aadhar[i]
    }

    //output
    for(int i =0; i<5; i++){
        printf("%d index = %d\n", i, aadhar[i]); //*(ptr+i) OR aadhar[i]
    }
    return 0;
}

