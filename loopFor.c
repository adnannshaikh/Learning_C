#include <stdio.h>

int main(){
	int sum = 0;
	for(int i = 1;i<11;i++){
		printf("loop number:%i\n",i);
		sum += i;
		}
	printf("%d",sum);
	}