##
## EPITECH PROJECT, 2023
## B-CPE-110-STG-1-1-organized-raphael.petrequin
## File description:
## Makefile
##

SRC	=	includes/mini_printf/my_putchar.c			\
		includes/mini_printf/my_putstr.c			\
		includes/mini_printf/my_put_nbr.c			\
		includes/mini_printf/my_strlen.c			\
		includes/mini_printf/mini_printf.c			\
		includes/linked_list_lib/len_args.c			\
		includes/linked_list_lib/len_list.c			\
		includes/linked_list_lib/delete_in_list.c	\
		includes/linked_list_lib/push_to_list.c		\
		includes/linked_list_lib/my_strcmp.c		\
		includes/linked_list_lib/my_getnbr.c		\
		includes/linked_list_lib/my_strdup.c		\
		includes/sorting_alg/quick_sort_name.c		\
		includes/sorting_alg/quick_sort_type.c		\
		includes/sorting_alg/quick_sort_id.c		\
		includes/shell/add.c						\
		includes/shell/del.c						\
		includes/shell/sort.c						\
		includes/shell/disp.c						\
		organized.c

OBJ	=	$(SRC:.c=.o)

NAME	=	organized

CFLAGS	=	-g

all:	$(NAME)

%.o:	%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) -L./ -lshell

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:		fclean all
