#include <stdio.h>

int main(void) {
	// your code goes here
	int a,f=0;
	scanf("%d",&a);
	if(a==0)
	{
		printf("neither prime nor composite");
	}
	else if(a==1)
	{
		printf("Not prime");
	}
	else
	{
	for(int i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			f=1;
			break;
		}
	}
	
	if(f==0)
	{
		printf("Prime");
	}
	else
	{
		printf("not prime");
	}
	}
	return 0;
}
