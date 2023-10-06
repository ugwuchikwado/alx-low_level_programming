#include <stdlib>
#include <stdio>

/*
 * main - program that multiplies two postive numbers
 * @args: number of auguments passed
 * @argv: array vector of arguments
 * Return zero
 */

int main(int args, char *argv)
{
	int num1, num2, pdt;

	if (args != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isdigit(num1) && !isdigit(num2))
	{
		printf("Error\n");
	 	exit(98);	
	}

	pdt = num1 * num2;
	printf("%d\n", pdt);
	return (0);
}
