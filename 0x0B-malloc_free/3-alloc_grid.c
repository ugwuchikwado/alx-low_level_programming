#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height) {
    // Check if width or height is 0 or negative
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    // Allocate memory for the grid
    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL; // Return NULL on failure
    }

    // Allocate memory for each row and initialize elements to 0
    for (int i = 0; i < height; ++i) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            // Free previously allocated memory if allocation fails
            for (int j = 0; j < i; ++j) {
                free(grid[j]);
            }
            free(grid);
            return NULL; // Return NULL on failure
        }
        
        // Initialize elements to 0
        for (int j = 0; j < width; ++j) {
            grid[i][j] = 0;
        }
    }

    return grid; // Return pointer to the 2D array
}
