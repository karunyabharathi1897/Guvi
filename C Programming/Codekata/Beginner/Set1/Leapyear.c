#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	if(a%400==0 || a%100==0 || a%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("not a Leapyear");
	}
	return 0;
}
