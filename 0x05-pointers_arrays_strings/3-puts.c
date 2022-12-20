#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		_putchar(str[r]);
		r++;
	}
	_putchar('\n');
}
