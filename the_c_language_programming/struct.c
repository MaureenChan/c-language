#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

struct point {
    int x;
    int y;
};

struct rect{
    struct point pt1;
    struct point pt2;
}screen{{3,4},{0,0}};

struct point makepoint(int x, int y)
{
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}

struct point addpoint (struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

struct point middlepoint(struct point p1, struct point p2)
{
    p1.x = (p1.x + p2.x) / 2;
    p1.y = (p1.y + p2.y) / 2;
    return p1;
}

struct rect cannonrect(struct rect r)
{
    struct rect temp;
    temp.pt1.x = min(r.pt1.x, r.pt2.x);
    temp.pt1.y = min(r.pt1.y, r.pt2.y);
    temp.pt2.x = max(r.pt1.x, r.pt2.x);
    temp.pt2.y = max(r.pt1.y, r.pt2.y);
    return temp;
}

int ptinrect(struct point p, struct rect r)
{
    return p.x >= r.pt1.x && p.x <r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}

int main()
{
    printf("middle point:(%d,%d)\n",)
}
