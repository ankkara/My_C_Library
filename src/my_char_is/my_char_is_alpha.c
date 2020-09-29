/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_char_is_alpha
*/

//alpha = 1 26 letters and 0-9
// else = 0 symbols

#include "my_c_library.h"

int my_char_is_alpha(char c)
{
    if ((c >= '0' && c <= '9') ||
        (c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}