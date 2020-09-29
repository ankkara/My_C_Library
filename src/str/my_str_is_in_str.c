/*
** EPITECH PROJECT, 2020
** MP_TEK1_COACHING
** File description:
** find_mp
*/

//str in str = 1
//no str = 0

#include "my_c_library.h"

int my_str_is_in_str(char *str, char *strtwo)
{
    int x = 0;
    int xtwo = 0;

    while (str[x] != '\0')
    {
        if (str[x] == strtwo[xtwo])
            xtwo++;
        else
            xtwo = 0;
        x++;
    }
    if (xtwo == my_strlen(strtwo))
        return (1);
    return (0);
}