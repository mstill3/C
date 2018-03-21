#include <stdio.h>

int main()
{
    int inty = 14;
    int negy = -1;
    float floaty = 9.2;
    char chary = 67;
    char str[] = "goose";
   
    printf("int: %d\n", inty);
    printf("int: %i\n", inty);
    printf("float: %f\n", floaty);
    printf("float scientific: %e\n", floaty);
    printf("float scientific: %E\n", floaty);
    printf("float tinyier: %g\n", floaty); //chooses shortest float expression e
    printf("float tinyier: %G\n", floaty); //chooses shortest float expression E
    printf("unsigned octal format of int: %o\n", inty);
    printf("unsigned int: %u\n", negy); // 4294967296 = 0
    printf("unsigned hex: %x\n", inty);
    printf("unsigned hex: %X\n", inty);
    printf("char: %c\n", chary);
    printf("string: %s\n", str);
    
    //printf("pointer argument: %p\n", );
    int count;
    printf("num chars typed: %n", &count);
    printf("%d\n", count);
    
    printf("I got a 50%%!");
   
    return 0;
}