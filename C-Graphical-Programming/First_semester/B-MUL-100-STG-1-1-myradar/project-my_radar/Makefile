##
## EPITECH PROJECT, 2023
## B-CPE-110-STG-1-1-organized-raphael.petrequin
## File description:
## Makefile
##

SRC	=	includes/parsing/my_str_to_word_array_for_radar.c	\
		includes/parsing/my_str_to_word_array_for_int.c		\
		includes/parsing/error_handler.c					\
		includes/parsing/my_getnbr.c						\
		includes/my_strcpy.c								\
		includes/take_coords.c								\
		includes/events/make_event.c						\
		includes/events/analyse_event.c						\
		includes/makes/make_planes_and_control_towers.c		\
		includes/makes/make_screen.c						\
		includes/makes/make_textures.c						\
		includes/makes/make_rectangles_and_circles.c		\
		includes/makes/make_text_end.c						\
		includes/collisions/planes_in_radar.c				\
		includes/collisions/is_destroyed.c					\
		includes/displays/display_no_arg.c					\
		includes/displays/display_help.c					\
		includes/displays/display_planes.c					\
		includes/displays/display_ctowers.c					\
		includes/destroys/destroy_all.c						\
		includes/destroys/destroy_planes_and_ctowers.c		\
		includes/destroys/destroy_screen.c					\
		includes/destroys/destroy_textures.c				\
		my_radar.c

OBJ	=	$(SRC:.c=.o)
NAME	=	my_radar
CFLAGS	=	-g
FLAGS	=	-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system -lm

all:	$(NAME) clean

%.o:	%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(FLAGS)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:		all clean
