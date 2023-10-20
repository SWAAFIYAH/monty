#include "monty.h"

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
	char buf[20000], *word;
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
		opcode = get_opcode(word);
		if (opcode == NULL)
		{
			_free(&stack);
			fclose(fd);
			error4(i, word);
		}
		if (opcode == push)
		{
			word = strtok(NULL, "\n\t ");
			if (word == NULL || is_int(word) == -1)
			{
				_free(&stack);
				fclose(fd);
				error2(i);
			}
		}
		opcode(&stack, atoi(word));
	}
	_free(&stack);
	fclose(fd);
	return (0);
}
