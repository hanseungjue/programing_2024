#include <stdio.h>
#include <stdlib.h>


struct point {
    int x;
    int y;
};


int getArea(struct point p1, struct point p2);

int main(int argc, char *argv[]) {
    struct point p1, p2;
    int area;

    printf("Enter the coordinate of p1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter the coordinate of p2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    area = getArea(p1, p2);

    printf("Area: %d\n", area);

    return 0;
}

int getArea(struct point p1, struct point p2) {
    int width = abs(p2.x - p1.x); 
    int height = abs(p2.y - p1.y); 

    return width * height;
}

