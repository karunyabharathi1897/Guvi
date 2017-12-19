#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int a,r,s;
	scanf("%d",&a);
	int t=a;
	while(a!=0)
	{
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	if(t==s)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	return 0;
}
