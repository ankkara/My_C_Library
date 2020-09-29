/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_arraylen
*/

#include "my_c_library.h"

int my_arraylen(char **array)
{
    int y = 0;

    while (array[y] != NULL)
        y++;
    return (y);
}

//"hola" "que" "tal" "NULL"