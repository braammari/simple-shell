#include <stdlib.h>
#include "shell.h"

/**
 * free_grid - frees a 2d grid previously created by alloc_grid
 * @grid: pointer to 2d array
 *
 * Return: void
 */
void free_grid(char **grid)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; grid[i] != NULL; i++)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
		free(grid);
		grid = NULL;
	}
}

/**
* free_path -  Entrypoint
* Description: 'the program's description free_grid
* @grid : 1 param
*  Return: Always 0 (Success)
*/
void free_path(char **grid)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; grid[i] != NULL; i++)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
		free(grid);
		grid = NULL;
	}
}
