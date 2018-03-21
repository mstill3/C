#include <stdio.h>

int main()
{
	int num = 454545;
	int *ptr;

	ptr = &num;

	printf("num: %d, memloc: %d\n", *ptr, &ptr);

	return 0;
}
