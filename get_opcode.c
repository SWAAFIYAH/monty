#include "monty.h"

/**
 * get_opcode - ..
 * @str: ..
 * Return: ..
 */

void (*get_opcode(char *str))(stack_t **, unsigned int)
{
	instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{NULL, NULL}
	};
	int i = 0;

	while (inst[i].opcode != NULL)
	{
		if (strcmp(str, inst[i].opcode) == 0)
			return (inst[i].f);
		i++;
	}
	return (NULL);
}
