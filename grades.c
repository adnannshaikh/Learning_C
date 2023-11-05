#include <stdio.h>

int main(int argc, char **argv)
{
//	initializing array 
//	int counters[5]={0,0,0,0,0};
	
	int grades[10];
	int count = 10;
	double sum;
	float average;
	
	
	printf("Please enter the grades:\n");
	
	for(int i=0;i<count;i++){
		printf("%i>",i+1);
		scanf("%i",&grades[i]);
		sum += grades[i];
	}
	
	average = (float)sum/count;
	printf("Average of 10 grades is:%f\n",average);
	
	
	return 0;
}
