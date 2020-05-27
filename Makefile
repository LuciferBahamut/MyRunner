##
## EPITECH PROJECT, 2019
## makefile
## File description:
## my_printf
##

NAME	=	my_runner

SRC	=	src/main.c \
		src/error_handling.c \
		src/my_putchar.c \
		src/my_putstr.c \
		src/display_h.c \
		src/runner.c \
		src/function_struct.c \
		src/jump.c \
		src/sprite_create.c \
		src/music.c \
		src/score.c \
		src/my_revstr.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lm -I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f *~ \
		rm -f include/*~ \
		rm -f src/*~ \
		rm -f *.gcda \
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all TU clean fclean re
