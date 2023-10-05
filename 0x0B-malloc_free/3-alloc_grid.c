#include <stdio.h>
#include <stdlib.h> /* Include the necessary header file for malloc and free */

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
int **tab, i, j;

/* Check for invalid input or malloc failure */
if (width <= 0 || height <= 0)
{
return (NULL);
}

/* Allocate memory for the array of pointers to rows */
tab = (int **)malloc(sizeof(int *) * height);

/* Check for malloc failure */
if (tab == NULL)
{
return (NULL);
}

/* Allocate memory for each row and initialize elements to 0 */
for (i = 0; i < height; i++)
{
tab[i] = (int *)malloc(sizeof(int) * width);

/* Check for malloc failure */
if (tab[i] == NULL
{
/* Free previously allocated memory */
for (j = 0; j < i; j++)
{
free(tab[j]);
}
free(tab);
return (NULL);
}

/* Initialize elements to 0 */
for (j = 0; j < width; j++)
{
tab[i][j] = 0;
}
}

return (tab);
}

