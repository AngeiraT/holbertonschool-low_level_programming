#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: width array
 * @height: height array
 *
 * Return: Poiter to array.
 */
int **alloc_grid(int width, int height)
{
	int freenum;
	int x;
	int y;
	int i;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (freenum = 0; freenum < i; freenum++)
			{
				free(array[freenum]);
			}
			free(array);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
