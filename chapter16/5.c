#include <stdio.h>

typedef struct {
    int x, y;
} Point;

Point move(Point *p, int dx, int dy);

int main () {
    Point p1 = {1, 1};
    Point p2 = move(&p1, 3, 4);

    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", p2.x, p2.y);

    return 0;
}

Point move(Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
    Point newPoint = {p->x * 2, p->y * 2};
    return newPoint;
}