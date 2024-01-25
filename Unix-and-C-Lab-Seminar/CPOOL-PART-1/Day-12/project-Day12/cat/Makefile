##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## Makefile
##

SRC	=	../lib/my/my_putchar.c	\
		../lib/my/my_putstr.c	\
		cat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
