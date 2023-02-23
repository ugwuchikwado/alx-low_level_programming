#include "main.h"

/**
 * _isdigit - check for a digit from 0 through 9
 * @c - digit that is been checked
 * return 1 un success otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
