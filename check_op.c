#include "monty.h"

/**
 * check_op - ..
 * @str: ..
 * @line: ..
 * Return: ...
 */

void check_op(char *str, int line)
{
	char *opcode[] = {"pint", "pop", "add", "swap",
		"sub", "mod", "div", "mul", "pchar", NULL};
	char *index_2[] = {"add", "swap", "sub",
		"div", "mod", "mul", NULL};
	int i = 0;

	if (stack == NULL)
	{
		while (opcode[i] != NULL)
		{
			if (strcmp(opcode[i], str) == 0)
				error2(line, str);
			i++;
		}
	}
	if (check_stack(&stack) < 2)
	{
		while (index_2[i] != NULL)
		{
			if (strcmp(index_2[i], str) == 0)
				error2(line, str);
			i++;
		}
	}
	check_first_element(&stack, str, line);
}
