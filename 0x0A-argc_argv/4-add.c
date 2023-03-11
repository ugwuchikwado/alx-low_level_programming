#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - function that prints the sum of all arguments it receives
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int nums, i;
	nums = 0;

	if (argc == 1)
	{
		printf("%d\n",0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
	
				printf("Error\n");
				return (1);
			}
			else
			{
				nums = nums + atoi( argv[i]);
			
			}
		}
		printf("%d\n", nums);
	}
	return (0);
	}
