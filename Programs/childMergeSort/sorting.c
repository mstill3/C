#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  	int list[50];

       	int swapped = 1;
       	int j = 0, i=0;
       	int temp;
	srand(time(NULL));

	for ( ; i<50; i++)
	{
		list[i]=rand()%500;
		printf("%d  ", list[i]);
	}
	printf("\n ***************************\n");

       	while (swapped == 1) {
              swapped = 0;
              j++;
              for (i = 0; i < 50-j; i++) {

                     if (list[i] > list[i+1]) {

                           temp = list[i];

                           list[i] = list[i+1];

                           list[i+1] = temp;

                           swapped = 1;

                     }

              }
	 
       }
	printf("\n *********Sorted List*********\n");
	for (i=0 ; i<50; i++)
	{
		printf("%d  ", list[i]);
	}
	printf("\n");
}