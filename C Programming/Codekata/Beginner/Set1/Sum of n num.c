#include <stdio.h>

int main(void) {
	// your code goes here
	int n,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("%d",s);
	return 0;
}
