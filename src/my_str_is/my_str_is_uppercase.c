/*
** EPITECH PROJECT, 2020
** MP_TEK1_COACHING
** File description:
** my_str_is_uppercase
*/

#include "my_c_library.h"

int my_str_is_uppercase(char *str)
{
    int x = 0;
    while (str[x] != '\0') {
        if (my_char_is_uppercase(str[x]) == 0)
            return (0);
        x++;
    }
    return (1);
}