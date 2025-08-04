#include<stdio.h>

int main(){
    int array[5];
    for(int i=0; i<5; i++){
        printf("enter integers %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("all integers are: ");
    for(int i=0; i<5; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;

}
/*

int main(){
    int array[3];
    int i1, i2,i3;

    printf("enter i1:");
    scanf("%d", &array[0]);

    printf("enter i2:");
    scanf("%d", &array[1]);

    printf("enter i3:");
    scanf("%d", &array[2]);

    printf("integers are: %d %d %d", array[0], array[1], array[2]);
    return 0;

}

*/