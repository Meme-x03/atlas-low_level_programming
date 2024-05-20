#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints if number is positive, negative or zero
 * Return: Always (Successful)
 *
 */

int main(void)
{
	int j;

	srand(time(0));
	j = rand() - RAND_MAX / 2;

	if (j > 0)
	{
	printf("%d is positive\n" , j);
	}
	else if (j == 0)
	{
	printf("%d is zero\n", j);
	}
	else
	{
	printf("%d is negative\n", j);
	} 
	return (0);
}
