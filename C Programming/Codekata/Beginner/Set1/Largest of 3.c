#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d\n%d\n%d\n",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d",a);
		}
		else
		{
			printf("%d",c);
		}
	}
	else
	{
		printf("%d",b);
	}
	return 0;
}
