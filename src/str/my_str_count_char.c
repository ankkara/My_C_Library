/*
** EPITECH PROJECT, 2020
** MP_TEK1_COACHING
** File description:
** my_str_count_char
*/

int my_str_count_char(char *str, char c)
{
    int x = 0;
    int count = 0;

    while (str[x] != '\0') {
        if (str[x] == c)
            count++;
        x++;
    }
    return (count);
}