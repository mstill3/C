#include <stdio.h>

void main()
{
    const int MAX = 30;
    for(int i = 1; i <= MAX; i++)
    {
        printf("%d\t%x\n", i, i);
    }
    
}