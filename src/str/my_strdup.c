/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_strdup
*/

#include "../../include/my_c_library.h"
#include <stdlib.h>

char *my_strdup(char *str)
{
    int size = my_strlen(str);
    char *stock = malloc(sizeof(char)*(size + 1));

    if (stock == NULL)
        return (NULL);
    stock = my_strcpy(stock, str);
    return (stock);
}

//hola
//size = 4
//stock[0] = h
//stock[1] = o
//stock[2] = l
//stock[3] = a

/*int main(int ac, char **av)
{
    char *res = "huy";

    if (ac < 2)
        return (84);
    res = my_strdup(res);  /!\IMPORTANT TO CHECK NULL /!\
    if (res == NULL)
        return (84);
    //printf("res = %d\n", res);
    free(res);
    return (0);
}*/