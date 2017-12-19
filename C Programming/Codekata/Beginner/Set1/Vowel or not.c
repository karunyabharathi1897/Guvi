#include <stdio.h>

int main(void) {
	// your code goes here
	char y,x;
	scanf("%c",&y);
	x=tolower(y);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
		printf("Vowel");
	}
	else
	{
		printf("Not a Vowel");
	}
	return 0;
}
