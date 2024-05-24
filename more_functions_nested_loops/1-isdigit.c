#include "main.h"

/**
 * isdigit - Check is a number is a digit
 * Return: Always 0 (Sucess)
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

