#include <stdio.h>

/**
 * main - function that prints number of arguments followed by a new line
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
<<<<<<< HEAD
	int i;

	for (i = 0;i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
=======
	printf("%d\n", argc);
>>>>>>> 139eff59c30a78cb04ee914b2f6c7386906d05b5
	return (0);
}
