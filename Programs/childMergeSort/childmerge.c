#include <stdio.h>
#include <stdlib.h>

void print(int nums[], int length)
{
	printf("{  ");
        for(int i = 0; i < length; i++)
                printf("%d  ", nums[i]);
        printf("}\n");
}

void main(int argc, char **argv)
{
        int list[10] = {7, 12, 19, 3, 18, 4, 2, 6, 15, 8};
	int numsections = argv[1];
        print(list, 10);
}

