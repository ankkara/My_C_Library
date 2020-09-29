/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_arraycpy
*/

#include <stdio.h>

char **my_arraycpy(char **arrayone, char **arraytwo)
{
    int x = 0;

    while (arrayone[x] != NULL)
    {
        arrayone[x] = arraytwo[x];
        x++;
    }
    arrayone[x + 1] = NULL;
    return (arrayone);

}