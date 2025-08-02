#include<stdio.h>
int main(){
    int choice;
    printf("enter: ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf("you chose one");
            break;
        case 2:
            printf("you chose two");
            break;

        default:
            printf("invalid");
    }
    return 0;

}