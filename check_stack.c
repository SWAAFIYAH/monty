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
	if  (check_stack(stack) >= 2 && strcmp(str, "div") == 0 && (*stack)->n == 0)
	{
		write(2, "L", 1);
		_atoi(line);
		write(2, ": division by zero\n", 19);
		exit(EXIT_FAILURE);
	}
}
