#include "monty.h"

/**
 * is_int - ..
 * @str: ..
 * Return: ..
 */

int is_int(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] - '0' < 0 || str[i] - '0' > 9)
			return (-1);
	}
	return (0);
}
