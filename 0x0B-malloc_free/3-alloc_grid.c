#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int f, p, t, z;
	int **c;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (f = 0; f < height; f++)
	{
		c[i] = malloc(sizeof(int) * width);

		if (a[f] == NULL)
		{
			for (p = f; p >= 0; p--)
			{
				free(c[p]);
			}

			free(c);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
	{
		for (z = 0; z < width; z++)
		{
			a[t][z] = 0;
		}
	}

	return (c);
}
