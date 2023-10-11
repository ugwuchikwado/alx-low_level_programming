#include "function_pointers.h"

/**
  * int_index -index of the first element
  * @array: data to be sorted
  * @size: is the number of elements in the array array
  * @cmp:  is a pointer to the function to be used to compare values
  *
  * Return: an integer if true or -1 if false
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
