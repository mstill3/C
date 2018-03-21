#include <stdio.h>

void main()
{
    int x = 7; 
    int y = 5;
    
    printf("%d / %d = %d\n", x, y, x/y);
    printf("(float) %d / %d = %g\n", x, y, (float)x/y);
}