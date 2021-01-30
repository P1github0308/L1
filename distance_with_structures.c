//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
typedef struct 
{
	float x;
	float y;
}Point;
Point input(int n)
{
	Point i;
	printf("Enter the x coordinate of point %d : ",n);
	scanf("%f",&i.x);
	printf("Enter the y coordinate of point %d : ",n);
	scanf("%f",&i.y);
	return i;
}
float distance(Point p1, Point p2)
{
	float dist;
	dist = sqrt( (pow((p2.x-p1.x),2))+(pow((p2.y-p1.y),2)));
	return dist;
}
void output(Point p1, Point p2, float dist)
{
	printf("The distance between %f, %f and %f,%f is: %f\n", p1.x, p1.y, p2.x, p2.y, dist);
}
int main()
{
	Point p1,p2;
	float dist;
	p1=input(1);
	p2=input(2);
	dist=distance(p1,p2);
	output(p1,p2,dist);
	return 0;
}

