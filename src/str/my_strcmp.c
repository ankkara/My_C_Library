/*
** EPITECH PROJECT, 2020
** MP_TEK1_COACHING
** File description:
** my_strcmp
*/

#include "my_c_library.h"

int my_strcmp(char *str, char *str1)
{
    int x = 0;

    if (my_strlen(str) != my_strlen(str1))
        return (0);
    while (str[x] != '\0') {
        if (str[x] != str1[x])
            return (0);
        x++;
    }
    return (1);
}