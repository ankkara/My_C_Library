/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_putstr
*/

#include "my_c_library.h"

void my_putstr(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x++;
    }
}