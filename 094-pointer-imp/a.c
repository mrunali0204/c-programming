#include<Stdio.h>
int main(){
    int a = 10, b =20;
    char c = 'X';
    int *ip = &a;
    char *cp =&c;
    void *vp;

    //assign int* and char* to *void
    vp = ip;  //allowed
    vp = cp; //allowed

    //pointer arithmetic
    printf("int* ip = %p\n", (void*)ip);
    printf("ip +1 = %p (moves by %zu bytes )\n", (void*)(ip+1), sizeof(int));

    printf("char* cp = %p\n", (void*)cp);
    printf("cp+1 = %p (moves by %zu bytes)\n", (void*)(cp+1),sizeof(char));

    //comparing int* and char*
    //if (ip == cp) { } -> not allowed

    //correct way: CAST TO VOID*
    if ((void*)ip == (void*)cp){
        printf("ip and cp point to same location\n");
    }
    else{
        printf("ip and cp pointdifferent locations\n");
    }

    //comparing char* and void* -> allowed
    if(cp == vp){
        printf("cp and vp are same afetr assignment\n");
    }
    return 0;

}

/*
output

int* ip = 00000090505FFD2C
ip +1 = 00000090505FFD30 (moves by 4 bytes )   
char* cp = 00000090505FFD2B
cp+1 = 00000090505FFD2C (moves by 1 bytes)     
ip and cp pointdifferent locations
cp and vp are same afetr assignment

*/