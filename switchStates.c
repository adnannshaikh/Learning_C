#include <stdio.h>

int main(){
	enum weekdays {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
	enum weekdays today=monday;
	
	switch(today){
		case wednesday:
		printf("Today is wednesday");
		break;
		case saturday:
		printf("Today is saturday");
		break;
		case monday:
		printf("Today is monday");
		break;
		default:
		printf("dead");
		break;
	}
	
	
	}