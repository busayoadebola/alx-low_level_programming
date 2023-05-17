#include "main.h"

/**
 * **alloc_grid - to print a 2 dimensional array
 * @width:the array width size
 * @height: the array height size
 * Return: n the array
 */

int **alloc_grid(int width, int height)
{
	int **n;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);
	if (n == NULL)
		return (NULL);

	x = 0;
	while (x < height)
	{
		n[x] = malloc(sizeof(int) * width);
		if (n[x] == NULL)
		{
			for (; x >= 0; x--)
				free(n[x]);
			free(n);
			return (NULL);
		}
		x++;
	}

	x = 0;
	while (x < height)
	{
		for (y = 0; y < width; y++)
		{
			n[x][y] = 0;
		}
		x++;
	}
	return (n);
}
