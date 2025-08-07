#include<stdio.h>

//function decleration
void printNamaste();
void printBonjour();

int main(){
    char country;
    printf("enter your country(I/F): ");
    scanf("%c", &country);

    if(country == 'I'){
        printNamaste();  //function call
    }
    else{
        printBonjour();   // function call
    }
}

//function definition
void printNamaste(){
    printf("Namaste \n");
}

void printBonjour(){
    printf("Bonjour \n");
}



