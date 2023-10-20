#include "monty.h"

/**
 * swap - ..
 * @stack: ...
 * @line_number: ...
 * Return: ..
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;
	tmp->n ^= tmp->prev->n;
	tmp->prev->n = tmp->n ^ tmp->prev->n;
	tmp->n ^= tmp->prev->n;
}
