#include "monty.h"

/**
 * is_char - ...
 * @n: ...
 * Return: ..
 */

int is_char(int n)
{
	if ((n + '0' >= 0 && n + '0' < 127))
		return (0);
	return (-1);
}
