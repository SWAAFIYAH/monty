#include "monty.h"

/**
 * rotl - ..
 * @stack: ..
 * @line_number: ..
 * Return: ..
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	int l, i;
	stack_t *tmp;
	(void)line_number;

	l = check_stack(stack);
	if (l > 1)
	{
		l = l - 1;
		i = l;
		tmp = *stack;
		while (l != 0)
		{
			i = l;
			while (i != 0)
			{
				tmp->n ^= tmp->prev->n;
				tmp->prev->n = tmp->n ^ tmp->prev->n;
				tmp->n ^= tmp->prev->n;
				tmp = tmp->prev;
				i--;
			}
			tmp = *stack;
			l--;
		}
	}
}
