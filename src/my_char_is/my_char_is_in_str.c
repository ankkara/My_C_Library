/*
** EPITECH PROJECT, 2020
** MP_TEK1_COACHING
** File description:
** my_char_is_in_str
*/

int my_char_is_in_str(char *str, char c)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] == c)
            return (1);
        x++;
    }
    return (0);
}