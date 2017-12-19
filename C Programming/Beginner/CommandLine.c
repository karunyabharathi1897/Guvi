#include <stdio.h>

int main(int argc,char argv[]) {
	printf("program name %s",argv[0]);
	if(argc==2)
	{
		printf("the values are:",argv[1]);
	}
return 0;
}

