#include<stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("enter the string: ");
    scanf("%s", str);
    
    int count = 0;

    for(int i=0; i< strlen(str); i++){
        if(str[i] ==  '('){
            count++;
        }
        else if(str[i] == ')'){
            count--;
        }

        if (count < 0){
            printf("invalid");
            return 0;
        }
    }

    if(count == 0){
        printf("valid");
    }
    else{
        printf("Invalid");
    }

    return 0;
}



