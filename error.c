#include "monty.h"

/**
 * _atoi - convert number to character
 * @num: the number
 * Return: nothin
 */

int _atoi(int num)
{
	char c;
	int n;

	if (num == 0)
	{
		return (0);
	}
	else
	{
		num =  num + _atoi(num / 10);
		if (num > 9)
		{
			n =  num % 10;
			c = n + '0';
			write(2, &c, 1);
		}
		else
		{
			n = num;
			c = n + '0';
			write(2, &c, 1);
		}
		return (0);
	}
}

/**
 * error1 - ..
 * @str: ..
 * Return: ..
 */

void error1(char *str)
{
	write(2, str, strlen(str));
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}

/**
 * error2 - ..
 * @i: ..
 * @str: ..
 * Return: ..
 */

void error2(int i, char *str)
{
	char *opcode[] = {"push", "pint", "pop", "swap",
		"add", "sub", "div", "mul", NULL};
	int j = 0;

	while (opcode[j] != NULL)
	{
		if (strcmp(opcode[j], str) == 0)
		{
			write(2, "L", 1);
			_atoi(i);
			if (strcmp(str, "push") == 0)
				write(2, ": usage: push integer\n", 22);
			else if (strcmp(str, "pint") == 0)
				write(2, ": can't pint, stack empty\n", 26);
			else if (strcmp(str, "pop") == 0)
				write(2, ": can't pop an empty stack\n", 27);
			else if (strcmp(str, "swap") == 0)
				write(2, ": can't swap, stack too short\n", 30);
			else if (strcmp(str, "add") == 0)
				write(2, ": can't add, stack too short\n", 29);
			else if (strcmp(str, "sub") == 0)
				write(2, ": can't sub, stack too short\n", 29);
			else if (strcmp(str, "div") == 0)
				write(2, ": can't div, stack too short\n", 29);
			else if (strcmp(str, "mul") == 0)
				write(2, ": can't mul, stack too short\n", 29);
			exit(EXIT_FAILURE);
		}
	j++;
	}
}

/**
 * error3 - ..
 * @str1: ..
 * @str2: ..
 * Return: ..
 */

void error3(char *str1, char *str2)
{
	write(2, str1, strlen(str1));
	write(2, " ", 1);
	write(2, str2, strlen(str2));
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}

/**
 * error4 - ..
 * @i: ..
 * @str: ..
 * Return: ..
 */

void error4(int i, char *str)
{
	write(2, "L", 1);
	_atoi(i);
	write(2, ": unknown instruction ", 22);
	write(2, str, strlen(str));
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}
