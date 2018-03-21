#include <stdio.h>

int main()
{
    printf("Enter two chars: ");
    char c1 = getc(stdin);
    char c2 = getchar();
    
    printf("The 1st char you entered was: %c\n", c1);
    printf("The 2nd char you entered was: %c\n", c2);
    return 0;
}