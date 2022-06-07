##
## EPITECH PROJECT, 2022
## rpg
## File description:
## Makefile
##

SRC_LIB	=	my/my_getnbr.c	\
			my/my_str_to_world_arr.c	\
			my/my_strdup.c	\
			my/my_strlen.c\
			my/my_putstr.c\

OBJ_LIB	=	$(SRC_LIB:.c=.o)

NAME =	libmy.a

CC =	gcc

CPPFLAGS =	-Llib/my -lmy -I../includes

CFLAGS =	 -Wall -Wextra

all:	$(OBJ_LIB)
		ar rc $(NAME) $(OBJ_LIB)

clean:
		rm -f $(OBJ_LIB)
		rm -f *~
		rm -f #*#
		rm -f *.gcda
		rm -f *.gcno

fclean:	clean
		rm -f $(OBJ_LIB)
		rm -f $(NAME)
		rm -f vgcore.*

re:		fclean all
