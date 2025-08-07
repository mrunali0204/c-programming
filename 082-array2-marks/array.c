#include<stdio.h>
int main(){
    int marks[3];
    printf("marks phy :");
    scanf("%d", &marks[0]);

    printf("marks maths :");
    scanf("%d", &marks[1]);

    printf("marks che :");
    scanf("%d", &marks[2]); 

    printf("phy=%d, math=%d, che=%d", marks[0], marks[1], marks[2]);
    
    return 0;
    
}
/* output:

marks phy :55
marks maths :55
marks che :44
phy=55, math=55, che=44
*/

/*
#include<stdio.h>
int main(){
    int marks[3];
    printf("marks phy :");
    scanf("%d", &marks[0]);

    printf("marks maths :");
    scanf("%d", &marks[1]);

    printf("marks che :");
    scanf("%d", &marks[7]);  // here more than array size 

    printf("phy=%d, math=%d, che=%d", marks[0], marks[1], marks[2]);
    
    return 0;
      


ouptput:

marks phy :55
marks maths :54
marks che :33
phy=55, math=54, che=0

}
*/
