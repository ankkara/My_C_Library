##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	my_c_lib.a

SRCS	=	src/basic/my_putchar.c 					\
			src/basic/my_putstr.c 					\
			src/basic/my_reverse_str.c 				\
			src/basic/my_strlen.c 					\
			src/math/my_getnbr.c 					\
			src/math/my_putnbr.c 					\
			src/my_char_is/my_char_is_alpha.c		\
			src/my_char_is/my_char_is_lowercase.c	\
			src/my_char_is/my_char_is_number.c		\
			src/my_char_is/my_char_is_printable.c	\
			src/my_char_is/my_char_is_uppercase.c	\
			src/my_char_is/my_char_is_in_str.c		\
			src/my_str_is/my_str_is_alpha.c			\
			src/my_str_is/my_str_is_lowercase.c		\
			src/my_str_is/my_str_is_uppercase.c		\
			src/my_str_is/my_str_is_printable.c		\
			src/my_str_is/my_str_is_number.c		\
			src/str/my_str_count_char.c 			\
			src/str/my_str_is_in_str.c				\
			src/str/my_strcmp.c						\
			src/str/my_strcpy.c						\
			src/str/my_strdup.c						\
			src/str/my_strm_file_extension.c		\
			src/array/my_arraylen.c					\
			src/array/my_print_array.c				\
			src/array/my_allo_array.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

LIBCOMP	=	ar -rcs

IDIR    = 	include/

CFLAGS  +=	-I $(IDIR)
CFLAGS	+=	-Wall -Wextra
CFLAGS	+=	-Wpedantic -Wno-long-long
CFLAGS	+=	-Werror

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		$(LIBCOMP) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all