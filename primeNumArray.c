#include <stdio.h>

int main(){
	int p[100] = {0,1,2};
	
	
	
	for(int i =3;i<=100;i++){
		p[i]=i;
		if(p[i]/2==1 && p[i]%i==0){
			printf("%i ",p[i]);
			}
//		printf("%i ",p[i]);
	
	}


	


	
	
}