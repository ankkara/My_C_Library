/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_strcpy
*/

#include <stdio.h>

char *my_strcpy(char *str, char *strone)
{
    int x = 0;

    while (strone[x] != '\0')
    {
        str[x] = strone[x];
        x++;
    }
    str[x + 1] = '\0';
    return (str);
}