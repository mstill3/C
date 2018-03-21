#include <stdio.h>
#include <stdlib.h>

int add(int n1, int n2)
{
	return n1 + n2;
}

int main()
{
	int num1 = 1;
	int num2 = 2;
	int sum = add(num1, num2);
	printf("The sum of %d and %d is %d", num1, num2, sum);	
	return 0;
}
