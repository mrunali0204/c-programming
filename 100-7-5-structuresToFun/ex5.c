#include<stdio.h>
#include<string.h>

struct car{
    char name[10];
    int year;
};

void modifycar(struct car *c){
    printf("car: %s , year: %d\n", c-> name, c-> year);
    srtrcpy(c->name, "honda");
    c->year = 2025;
}

int main(){
    struct car c1;
    strcpy(c1.name, "mrunali");
    c1.year=2020;

    modifyCar(&c1);
    printf("after function call: %s,%d\n", c1.name, c1.year);
    return 0;
}