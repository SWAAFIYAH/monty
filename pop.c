#include "monty.h"

/**
 * pop - ..
 * @stack: ...
 * @line_number: ..
 * Return: ...
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;
	*stack = (*stack)->prev;
	free(tmp);
}
