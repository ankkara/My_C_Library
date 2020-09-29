/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_getnbr
*/

#include "my_c_library.h"
#include <stdio.h>

int my_getnbr(char *str)
{
    int neg = 1;
    int pos = 0;
    int convert = 0;

    while (my_char_is_alpha(str[pos]) == 0 && str[pos] != '\0')
    {
        if (str[pos] == '-')
            neg = -1;
        else
            neg = 1;
        pos++;
    }
    while (str[pos] != '\0') {
        if (my_char_is_number(str[pos]) == 1) {
            convert = convert * 10;
            convert = convert + str[pos] - 48;
        } else {
            convert = convert * neg;
            return (convert);
        }
        pos++;
    }
    convert = convert * neg;
    return (convert);
}