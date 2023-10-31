#include <stdio.h>

int main()
{
	double min=0.0,years=0.0,days=0.0;
	
	printf("Enter Number of minutes to be Converted:");
	//Getting input from the user
	scanf("%lf",&min);
	
	
	years = min/(24*60*365);
	days = min/(24*60);
	
	
	
	printf("%lf minutes converted to years is %lf and days is %lf",min,years,days);
	return 0;
}
