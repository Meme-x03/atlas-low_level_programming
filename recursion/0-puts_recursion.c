#include "main.h"

/**
 * @s: The string to print
 * Return: Always 0 (success)
 * _puts_recursion - Print a string followed by a new line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
