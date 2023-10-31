#include <stdio.h>

int main()
{
	double width=3,height=4,area=0.0,perimeter=0.0;
	area = width * height;
	perimeter = (height+width)*2;
	printf("Area of the rectangle is: %lf\n and perimeter is: %lf\n",area,perimeter);
	return 0;
}