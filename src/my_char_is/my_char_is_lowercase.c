/*
** EPITECH PROJECT, 2020
** my_C_lib
** File description:
** my_char_is_lowercase
*/

//lower (true) = 1
//upper (false) = 0

int my_char_is_lowercase(char c)
{
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}