#include <stdio.h>
#include <stdlib.h>

#define years  5
#define months  12

int main(){
	float sum=0.0,total=0.0;
	float rainfall[years][months]={
			{20.3,30.0,22.2,40,30,10,11.0,25.4,15,15.5,30,11},
			{30.0,20.0,42.2,30,30,10,11.0,25.4,15,15.5,30,11},
			{20.0,30.0,22.2,20,30,10,11.0,25.4,15,15.5,30,11},
			{30.0,20.0,42.2,10,30,10,11.0,25.4,15,15.5,30,11},
			{20.0,30.0,22.2,0.0,30,10,11.0,25.4,15,15.5,30,11}
	};
	printf("Year\t\t RAINFALL(inches)\n");
	for(int i =0;i<years;i++){
		for(int j = 0;j<months;j++){
			sum += rainfall[i][j];
		}
		printf("%i \t\t %.2f\n",2010 + i,sum);
		total+=sum;
	}
	printf("THe yearly average of rainfall is %f\n\n",total/years);
	printf("MONTHLY AVERAGE RAINFALL:\n\n");
	printf("JAN    FEB    MAR    APR    MAY    JUN    JUL    AUG    SEP    OCT    NOV    DEC\n");
	
	for(int i = 0;i<months;i++){
		for(int j = 0,sum = 0 ;j<years;j++){
			sum+=rainfall[i][j];
		}
		printf("%.2f ",sum/years);
	}
	
	return 0;
	
	
	
	
	
	
	
}