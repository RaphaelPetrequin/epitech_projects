##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## Makefile
##

SRC	=	includes/openfile.c						\
		includes/is_valid_char.c				\
		includes/my_str_to_word_array_for_bsq.c	\
		includes/get_number_from_first_line.c	\
		includes/load_file_in_mem.c				\
		includes/load_2d_arr_from_file.c		\
		includes/make_int_array.c				\
		includes/find_biggest_square.c			\
		includes/my_getnbr.c					\
		includes/my_strlen.c					\
		setting_up.c

OBJ	=	$(SRC:.c=.o)

NAME	=	setting_up

CFLAGS	=	-g

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
