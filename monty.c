#include "monty.h"
#include <stdio.h>

stack_t *stack = NULL;

/**
 * main - ..
 * @argc: ..
 * @argv: ..
 * Return: ..
 */

int main(int argc, char *argv[])
{
	FILE *fd;
	char buf[100], *word = NULL;
	int i = 0;
	void (*opcode)(stack_t **, unsigned int);

	if (argc != 2)
		error1("USAGE: monty file");
	fd = fopen(argv[1], "r");
	if (fd == NULL)
		error3("Error: Can't open file", argv[1]);
	while (fgets(buf, sizeof(buf), fd) != NULL)
	{
		i++;
		word = strtok(buf, "\n\t ");
		if (word == NULL)
			continue;
		check_op(word, i);
		opcode = get_opcode(word);
		if (opcode == NULL)
		{
			_free(&stack);
			error4(i, word);
		}
		if (opcode == push)
		{
			word = strtok(NULL, "\n\t ");
			if (word == NULL || is_int(word) == -1)
			{
				_free(&stack);
				error2(i, "push");
			}
		}
		opcode(&stack, atoi(word));
	}
	_free(&stack);
	fclose(fd);
	return (0);
}
