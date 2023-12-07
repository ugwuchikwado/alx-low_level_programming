#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - crackme5 keygen
 *
 * @ac: count of cmd line args
 * @av: cmd line args
 *
 * Return: 0 on Success
 */
int main(int ac, char **av)
{
	char password[7];
	char *s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int lenght = strlen(av[1]), i, f;

	(void) ac;
	password[6] = '\0';
	/* Function 1 */
	password[0] = s[(lenght ^ 59) & 63];
	/* Function 2 */
	for (i = 0, f = 0; i < lenght; i++)
		f += av[1][i];
	password[1] = s[(f ^ 79) & 63];
	/* Function 3 */
	for (i = 0, f = 1; i < lenght; i++)
		f *= av[1][i];
	password[2] = s[(f ^ 85) & 63];
	/* Function 4 */
	for (i = 0, f = av[1][0]; i < lenght; i++)
		if (av[1][i] > f)
			f = av[1][i];
	srand(f ^ 14);
	password[3] = s[rand() & 63];
	/* Function 5 */
	for (i = 0, f = 0; i < lenght; i++)
		f += av[1][i] * av[1][i];
	password[4] = s[(f ^ 239) & 63];
	/* Function 6 */
	for (i = 0, f = 0; i < av[1][0]; i++)
		f = rand();
	password[5] = s[(f ^ 229) & 63];
	for (i = 0; password[i]; i++)
		printf("%c", password[i]);
	return (0);
}
