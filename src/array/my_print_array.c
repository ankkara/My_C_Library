/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_print_array
*/

#include "my_c_library.h"

void my_print_array(char **array)
{
    int y = 0;

    if (array == NULL)
        return;
    while (array[y] != NULL)
    {
        my_putstr(array[y]);
        y++;
    }

}