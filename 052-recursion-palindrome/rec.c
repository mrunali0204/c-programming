// 121 - palindrome no.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char str[], int l, int r);

    int main(){
        char str[100];
        printf("enter string: ");
        scanf("%s", str);

    int len = strlen(str);
    
    if (isPalindrome(str, 0, len-1)){
        printf("the string is a palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;

}

bool isPalindrome(char str[], int l, int r){
    if(l>=r) return true;
    if(str[l] != str[r]) return false;
    return isPalindrome(str, l+r, r-1);
}

//int len = strlen(str); -> function from the header file <string.h>,  returns the length of the string str