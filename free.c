#include "monty.h"

/**
 * _free - ...
 * @stack: ..
 * Return: ..
 */

void _free(stack_t **stack)
{
	stack_t *tmp;

	if (*stack != NULL)
	{
		tmp = *stack;
		while (*stack != NULL)
		{
			*stack = (*stack)->prev;
			free(tmp);
			tmp = *stack;
		}
	}
}
