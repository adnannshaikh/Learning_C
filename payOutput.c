#include <stdio.h>

int main()
{
	int hoursWorked=0,basicPay=12,grossPay=0,temp1=0;
	float taxTemp=0.0,netPay=0.0;
	//takes the input
	printf("How Many Hours Did You Work This Week : \n");
	scanf("%i",&hoursWorked);
	//Calculates gross pay
	if(hoursWorked > 40){
		//Calculating overTime pay
		temp1=(hoursWorked - 40)*18;
		grossPay = (basicPay * 40)+temp1;
	}
	else{
		grossPay = (basicPay * hoursWorked);
	}
	//Calculates the tax rate amount
	if(grossPay > 450){
		taxTemp=(300*0.15)+(150*0.2)+((grossPay-450)*0.25);
	}
	else if(grossPay > 300 && grossPay<451 ){
		taxTemp=(300*0.15)+((grossPay-300)*0.2);
	}
	else{
		taxTemp=grossPay*0.15;
	}
	//calculates netpay
	netPay = grossPay-taxTemp;
	
	//prints the output
	printf("Your gross pay is:%i\n and Your after tax amount is:%f\n and your net pay is: %f\n",grossPay,taxTemp,netPay);
	return 0;
}
