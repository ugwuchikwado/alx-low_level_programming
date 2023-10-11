#include "function_pointers.h"

/**
  * print_name - Prints my name
  * @name: The name to print
  * @f: Pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
