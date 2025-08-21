#include<stdio.h>
#include<math.h>

struct Point{
    int x, y;
};

float distance(struct Point p1, struct Point p2);

int main(){
    struct Point a,b;
    printf("enter coordinates of first point(x,y): ");
    scanf("%d %d", &a.x, &a.y);

    printf("enter coordinates of second point(x,y): ");
    scanf("%d %d", &b.x, &b.y);
    
    float d = distance(a,b);

    printf("distance between points = %.2f\n", d);
    return 0;
}

float distance(struct Point p1, struct Point p2){
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
    
}