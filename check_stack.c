#include "monty.h"

/**
 * check_stack - ...
 * @stack: ..
 * Return: ...
 */

int check_stack(stack_t **stack)
{
	int i = 0;
	stack_t *tmp;

	if (*stack == NULL)
		return (0);
	tmp = *stack;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->prev;
	}
	return (i);
}

/**
 * check_first_element - ...
 * @stack:..
 * @str: ..
 * @line: ..
 * Return: ..
 */

void check_first_element(stack_t **stack, char *str, int line)
{
	char *opcode[] = {"div", "mod", NULL};
	int i = 0;

	if  (check_stack(stack) >= 2 && (*stack)->n == 0)
	{
		while (opcode[i] != NULL)
		{
			if  (strcmp(str, opcode[i]) == 0)
			{
				write(2, "L", 1);
				_atoi(line);
				if (strcmp(str, "div") == 0)
					write(2, ": division by zero\n", 19);
				else if (strcmp(str, "mod") == 0)
					write(2, ": division by zero\n", 19);
				exit(EXIT_FAILURE);
			}
		i++;
		}
	}
}
