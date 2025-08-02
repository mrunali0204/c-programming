#include<stdio.h>

//function decleration
void printNamaste();
void printBonjour();

int main(){
    char country;
    printf("enter your country(I/F): ");
    scanf("%c", &country);

   printNamaste();
}

//function definition
void printNamaste(){
    printBonjour();
}

void printBonjour(){
    printf("Bonjour \n");
}


