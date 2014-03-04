#include <stdio.h>
#include <math.h>
struct Point{ double x, y; };

int main()
{
    double dist(double x1, double y1, double x2, double y2);
	double dist1(struct Point a, struct Point b);
	double a = 6, b = 2, c = 2, d = 1;
	
	
	printf("The value is %lf",dist (a, b, c, d));
	printf("The value is %lf",dist1 (x,y));
	return 0;
}

double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}


double dist1(struct Point a, struct Point b)
{
	return hypot(a.x - b.x, a.y - b.y);
}
