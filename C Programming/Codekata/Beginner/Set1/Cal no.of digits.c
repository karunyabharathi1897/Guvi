#include <stdio.h>

int main(void) {
	// your code goes here
	int a,n=0;
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		n++;
	}
	printf("%d",n);
	return 0;
}
