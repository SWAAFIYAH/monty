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
