#include "monty.h"

/**
 * pint - ..
 * @stack: ...
 * @line_number: ..
 * Return: ..
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	printf("%d\n", (*stack)->n);
}
