#include "monty.h"

/**
 * pchar - ..
 * @stack: ..
 * @line_number: ...
 * Return: ...
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	printf("%c\n", (*stack)->n);
}
