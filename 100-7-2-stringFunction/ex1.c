#include<Stdio.h>
#include<string.h>
int main(){
    char firstStr[20];
    char secStr[30];

    //to take string input use %s
    printf("%s input the first string: ", firstStr);
    scanf(" %s", &firstStr);
    printf("%s input the second string: ", secStr);
    scanf(" %s", &secStr);
    
    //%d bcoz we r comparing ASCII value
    printf("%d", strcmp(firstStr, secStr));
    
}
/* to take  1 char use %C
int main(){
    char firstStr[20];
    char secStr[30];
    printf("%c input the first string: ", firstStr);
    scanf(" %c", &firstStr);
    printf("%c input the second string: ", secStr);
    scanf(" %c", &secStr);
    

    printf("%d", strcmp(firstStr, secStr));
    
}
*/