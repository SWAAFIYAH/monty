#include "monty.h"

/**
 * mul - ..
 * @stack: ..
 * @line_number: ..
 * Return: ..
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;
	tmp->prev->n *= tmp->n;
	*stack = (*stack)->prev;
	free(tmp);
}
