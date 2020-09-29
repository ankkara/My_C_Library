/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_alloc_array
*/

#include "my_c_library.h"

char **my_allo_array(int y, int x)
{
    char **array;
    int counter = 0;

    array = malloc(sizeof(char *)* (y + 1));
    if (array == NULL)
        return (NULL);

    while (counter != y)
    {
        array[counter] = malloc(sizeof(char)* (x + 1));
            if (array[counter] == NULL)
                return (NULL);
        counter++;
    }
    array[y] = NULL;
    return (array);
}