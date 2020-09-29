/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_reverse_str
*/

#include "my_c_library.h"

void my_reverse_str(char *str)
{
    int x = my_strlen(str) - 1;
    while (x >= 0) {
        my_putchar(str[x]);
        x--;
    }
}