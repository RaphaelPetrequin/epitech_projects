##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC 	=	includes/my_putchar.c	\
		includes/my_putstr.c	\
		includes/my_put_nbr.c	\
		includes/my_strlen.c	\
		addon/is_rush1_1.c	\
		addon/is_rush1_2.c	\
		addon/is_rush1_345.c	\
		rush3.c

OBJ 	=	$(SRC:.c=.o)

NAME 	=	rush3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
