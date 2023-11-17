#include <stdio.h>

//Function to count the number of characters in a string

int stringCounter(const char string[]){
	int count = 0;
	while(string[count]!='\0'){
		count++;
	}
	return count;
}





int main(){
	
	char string[]={"Count the elements"};
	//int c=stringCounter(string);
	printf("%d",stringCounter(string));
	
}