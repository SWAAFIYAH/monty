#include "monty.h"

/**
 * p_error - ..
 * @line: ..
 * Return: ..
 */

void p_error(int line)
{
	write(2, "L", 1);
	_atoi(line);
	write(2, ": can't pchar, value out of range\n", 34);
	exit(EXIT_FAILURE);
}
