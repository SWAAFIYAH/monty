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
	char buf[20], *word;
	int i = 0;
	void (*opcode)(stack_t **, unsigned int);

	if (argc != 2)
		error1("USAGE: monty file");
	fd = fopen(argv[1], "r");
	if (fd == NULL)
		error3("Error: Can't open file", argv[1]);
	while (!(feof(fd)))
	{
		i++;
		fgets(buf, sizeof(buf), fd);

		word = strtok(buf, "\n\t ");
		opcode = get_opcode(word);
		if (opcode == NULL)
			error4(i, word);
		if (opcode == push)
		{
			word = strtok(NULL, "\n\t ");
			if (word == NULL || is_int(word) == -1)
				error2(i);
		}
		opcode(&stack, atoi(word));
	}
	return (0);
}
