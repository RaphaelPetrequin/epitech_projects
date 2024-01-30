##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## Makefile
##

SRC	=	includes/perso_and_map_things/my_strlen.c							\
		includes/perso_and_map_things/search_p_pos.c 						\
		includes/perso_and_map_things/search_nbrows.c 						\
		includes/perso_and_map_things/load_file_in_mem.c					\
		includes/perso_and_map_things/load_2d_arr_from_file.c				\
		includes/perso_and_map_things/my_str_to_word_array_for_sokoban.c	\
		includes/events/display_usage.c										\
		includes/events/display_enlarge_terminal.c							\
		includes/events/press_space.c										\
		includes/events/moving_perso.c										\
		includes/events/search_issues.c										\
		includes/events/handle_boxes.c										\
		includes/events/check_win.c											\
		my_sokoban.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

FLAG	=	-lcurses

CFLAGS	=	-g

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(OBJ) $(FLAG)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re:		fclean all
