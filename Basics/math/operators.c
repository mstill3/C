#include <stdio.h>
#include <math.h>

void main()
{
	int a = 8;
	int b = 2;

	int sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);

        int difference = a - b;
        printf("%d - %d = %d\n", a, b, difference);

	int product = a * b;
	printf("%d * %d = %d\n", a, b, product);

        int quotient = a / b;
        printf("%d / %d = %d\n", a, b, quotient);

        int power = pow(b, a);
        printf("%d ^ %d = %d", b, a, power);
}
