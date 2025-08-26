#include<stdio.h>

struct Point{
    int x, y;
};

void movePoint(struct Point *p, int dx, int dy){
    p->x += dx;
    p->y += dy;
}

int main(){
    struct Point p1 = {5,5};
    movePoint(&p1, 3, -2);
    printf("moved point: (%d,%d)\n", p1.x, p1.y);
    return 0;
}