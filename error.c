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
 * Return: ..
 */

void error2(int i)
{
	write(2, "L", 1);
	_atoi(i);
	write(2, ": usage: push integer\n", 22);
	exit(EXIT_FAILURE);
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
