#include<stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    if (len % 2 == 0) printf("True"); else printf("False");

    int n;
    scanf("%d", &n);
    if (n % 2 == 0) printf("True"); else printf("False");

}