/*
** EPITECH PROJECT, 2020
** my_c_library
** File description:
** my_c_library
*/

#ifndef MY_C_LIBRARY_H_
#define MY_C_LIBRARY_H_

#include <stdlib.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_reverse_str(char *str);
int my_strlen(char *str);
int my_char_is_number(char c);
int my_char_is_alpha(char c);
int my_char_is_printable(char c);
int my_char_is_uppercase(char c);
int my_char_is_lowercase(char c);
int my_str_is_alpha(char *str);
int my_str_is_number(char *str);
int my_str_is_lowercase(char *str);
int my_str_is_uppercase(char *str);
int my_str_is_printable(char *str);
int my_strcmp(char *str, char *str1);
int my_char_is_in_str(char *str, char c);
int my_str_count_char(char *str, char c);
int my_str_count_char(char *str, char c);
int my_str_is_in_str(char *str, char *strtwo);
int my_strm_file_extension(char *file, char *ext);
int my_getnbr(char *str);
int my_putnbr(int nb);
char *my_strdup(char *str);
char *my_strcpy(char *str, char *strone);
int my_arraylen(char **array);
char **my_arraycpy(char **arrayone, char **arraytwo);
void my_print_array(char **array);
char **my_allo_array(int y, int x);

#endif /* !MY_C_LIBRARY_ */