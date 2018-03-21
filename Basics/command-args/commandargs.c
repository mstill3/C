/*****************************************************
Command - line syntax : Passing arguments to a command.
int main(int argc, char *argv[]);
int main(int argc, char **argv);
argc:   is a count of the arguments supplied to the program
argv : is an array of pointers to the strings which are those arguments
	   -argc is greater than zero.
	   -argv[argc] is a null pointer.
	   -argv[0] through to argv[argc - 1] are pointers to strings whose meaning will be determined by the program.
	   -argv[0] will be a string containing the program's name  
	   The following program displays all the arguments which were passed to 
	   the program at the command line.
	   Compile & run the program by passing your first, middle and last name as command line parameters to the program.
	   Run the program again, and this time pass your name and classes that youÂ’re currently taking.
********************************************************
Sample run :
$ gcc displayArgs.c -o displayArgs
$./displayArgs John Alex Wilson
Argc = 4
John
Alex
Wilson
*********************************************/
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;
	int temp = argc;
	//display the number of arguments passed at the command line
	printf("Argc = %d\n", argc);
	
	while (argc > 0)
	{
		printf("%s\n", argv[i]);
		i++;
		argc--;
	}
	//displaying characters in the first Argument
	for (i = 0; argv[1][i] != '\0'; i++)
		printf("Argv[1][%d] = %c \n", i, argv[1][i]);
	printf("Argv[1][%d] = %c \n", i, argv[1][i]);

	//Another version of the same program using pointers and pointer arithmetic
	printf("\n*****************************\n");
	argc = temp;
	while (argc --)
		printf("%s\n", *argv++);
		 
	return 0;
}

			