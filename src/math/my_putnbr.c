/*
** EPITECH PROJECT, 2020
** src
** File description:
** my_putnbr
*/

#include "my_c_library.h"

int my_putnbr(int nb)
{
    unsigned int ope;

    if (nb < 0) {
        my_putchar('-');
        ope = nb * -1;
    }else
        ope = nb;
    if (ope <= 9)
        my_putchar(ope + 48);
    else
        {
            my_putnbr(ope / 10);
            my_putnbr(ope % 10);
        }
    return (0);
}