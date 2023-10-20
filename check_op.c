#include "monty.h"

/**
 * check_op - ..
 * @str: ..
 * Return: ...
 */

char *check_op(char *str)
{
	char *opcode[] = {"pint", "add", "swap", "pop", NULL};
	int i = 0;

	while (opcode[i] != NULL)
	{
		if (strcmp(opcode[i], str) == 0)
		{
			return (opcode[i]);
		}
		i++;
	}
	return ("nil");
}
