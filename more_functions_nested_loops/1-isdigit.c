#include "main.h"

/**
 * isdigit - Check is a number is a digit
 * Return: Always 0 (Sucess)
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
