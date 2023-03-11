#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if runs
 */

int main(int argc, char *argv[])
{
	int i, j, pdt;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		pdt = i * j;
		printf("%d\n", pdt);
	}
<<<<<<< HEAD
	return (0);	
=======
	return (0);
>>>>>>> a65cd679cbd230220368419eb49e954d68753b27
}
