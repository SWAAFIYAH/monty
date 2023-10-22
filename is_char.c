#include "monty.h"

/**
 * is_char - ...
 * @n: ...
 * Return: ..
 */

int is_char(int n)
{
	if ((n + '0' > 64 && n + '0' < 91) || (n + '0' > 96 && n + '0' < 123))
		return (0);
	return (-1);
}
