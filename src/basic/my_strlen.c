/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int x = 0;
    while (str[x] != '\0')
        x++;
    return (x);
}