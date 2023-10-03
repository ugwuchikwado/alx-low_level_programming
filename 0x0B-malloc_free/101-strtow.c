#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * strtow - function to split string into array of words
 * @str - string to be splitted
 * Return - null if function fails
 */

char **strtow(char *str)
{
    char *piece, **str_arr = NULL, *str_cpy = NULL;
    int i = 0, *num = 0;

    if (str == NULL)
    {
        return (NULL);
    }
    str_cpy = strdup (str);
    piece = strtok(str_cpy, " ");
    while (piece != NULL)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        (*num)++;
        piece = strtok(NULL, " ");
    }

    str_arr = (char **)malloc(sizeof(char *) * (*num));
    piece = strtok(str, " ");
    for (i = 0; piece != NULL; i++)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        str_arr[i] = (char *)malloc(sizeof(char) * (strlen(piece) + 1));
        strcpy(str_arr[i], piece);
        piece = strtok(NULL, " ");
    }

    if (str_cpy)
        free (str_cpy);

    return (str_arr);
}
