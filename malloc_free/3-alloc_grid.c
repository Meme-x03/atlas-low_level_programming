#include <stdlib.h>

/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 * Return: ...
 */

int **alloc_grid(int widht, int height)
{
	int i, j, k, l;
	int **a;

	if (widht <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * widht);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < widht; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
