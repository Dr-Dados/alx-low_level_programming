#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **var;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	var = malloc(sizeof(int *) * height);

	if (var == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		var[x] = malloc(sizeof(int) * width);

		if (var[x] == NULL)
		{
			for (; x >= 0; x--)
				free(var[x]);

			free(var);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			var[x][y] = 0;
	}

	return (var);
}
