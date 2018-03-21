#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x = 1;
	if(fork() == 0)
		printf("printf1: x = %d\n", ++x);
	printf("printf2: x = %d\n", --x);
}
