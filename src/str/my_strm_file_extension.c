/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_strm_file_extension
*/

#include "my_c_library.h"

int my_strm_file_extension(char *file, char *ext)
{
    int x = 0;

    while (file[x] != '\0')
    {
        if (my_str_is_in_str(file, ext) == 0)
            return (0);
        x++;
    }
    return (1);
}