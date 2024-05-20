#include <stdio.h>

/**
 * main - Entry point hexagecimal
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	char low;

	for (j = '0'; j <= '9'; j++)
	putchar(j);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
