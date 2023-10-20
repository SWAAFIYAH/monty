#include "monty.h"

/**
 * add - ..
 * @stack: ..
 * @line_number: ..
 * Return: ..
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;
	tmp->prev->n += tmp->n;
	*stack = (*stack)->prev;
	free(tmp);
}
