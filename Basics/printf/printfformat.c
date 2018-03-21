#include <stdio.h>

void main()
{
    int num1 = 12;
    int num2 = 1234;
    float num3 = 123.987;
    
    //minimum field
    printf("%d\n", num1);
    printf("%5d\n", num1);
    printf("%05d\n", num1);
    printf("%d\n", num1);
    
    //left justified
    printf("%8d   %-8d\n", num1, num1);
    printf("%8d   %-8d\n", num2, num2);
    
    //precision
    printf("%0.2f\n", num3);
    printf("%0.5f\n", num3);
}