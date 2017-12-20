#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d\n%d",&a,&b);
	printf("The even Numbers are:");
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("\n%d ",i);	
		}
	
	}
	
	return 0;
}
