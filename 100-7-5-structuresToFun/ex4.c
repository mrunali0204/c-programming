#include<stdio.h>
#include<string.h>

struct car{
    char name[100];
    int plateno;
};

void CarInfo(struct car car1);

int main(){
    struct car car1;
    strcpy(car1.name, "maruti");
    car1.plateno = 233;
    CarInfo(car1);
    return 0;
}

void CarInfo(struct car car1){
    printf("\n %s", car1.name);
    printf("\n %d", car1.plateno);

}