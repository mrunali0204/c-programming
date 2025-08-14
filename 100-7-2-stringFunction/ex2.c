#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="";
    char ch;
    printf("enter characters: (type . at the end)\n");
    while(1){
        scanf("%c", &ch);
        if(ch == '.' )  break;
        char temp[2]={ch, '\0'};
        strcat(str, temp);
    }
    printf("final string: %s\n", str);
    return 0;
}