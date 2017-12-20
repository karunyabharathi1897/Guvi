#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d\n%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("\n%d :even",i);	
		}
		else
		{
			printf("\n%d :odd",i);
		}
	}
	
	return 0;
}
