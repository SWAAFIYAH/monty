#include "monty.h"

/**
 * push - ..
 * @stack: ..
 * @line_number: ..
 * Return: ..
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		write(2, "Error: malloc failed", 20);
		exit(EXIT_FAILURE);
	}
	newnode->n = line_number;
	newnode->next = NULL;
	newnode->prev = *stack;
	*stack = newnode;
}

/**
 * pall - ..
 * @stack: ..
 * @line_number: ..
 * Return: ..
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	if (*stack != NULL)
	{
		tmp = *stack;
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->prev;
		}
	}
}
