/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_char_is_number
*/

//number 0-9 return 1
//not number return 0r

#include "my_c_library.h"

int my_char_is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}