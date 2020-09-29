/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_char_is_printable
*/

//printable 1 -> 7 -13 / 32 - 126
//NO 0 -> 0-6 / 14 - 31 / 127
//ASCII

int my_char_is_printable(char c)
{
    if ((c >= 7 && c <= 13) ||
        (c >= 32 && c <= 126))
        return (1);
    return (0);
}