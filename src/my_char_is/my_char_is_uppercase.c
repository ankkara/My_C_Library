/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_char_is_uppercase
*/

//Upper 1(true)
//0 (false)

int my_char_is_uppercase(char c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}