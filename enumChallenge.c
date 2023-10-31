#include <stdio.h>

int main()
{
	enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
	enum company c1,c2,c3;
	c1=XEROX;
	c2=GOOGLE;
	c3=EBAY;
	
	printf("\nvalue of c1:%d",c1);
	printf("\nvalue of c2:%d",c2);
	printf("\nvalue of c3:%d",c3);
	
	return 0;
}