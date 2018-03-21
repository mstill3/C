#include <stdio.h>
#include <stdlib.h>

void main()
{
	int pid = fork();

	if(pid == -1)
	{
		perror("ERROR - fork\n");
		exit(0);
	}
	else if(pid == 0)
	{
		printf("Child: hi there!\n");
		exit(0);
	}
	else
	{
		printf("Parent: hi there!\n");
		exit(0);
	}
}
