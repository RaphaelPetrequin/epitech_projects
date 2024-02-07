##
## EPITECH PROJECT, 2023
## B-MUL-100-STG-1-1-myhunter-raphael.petrequin
## File description:
## Makefile
##

SRC	=	includes/my_strcpy.c								\
		includes/get_rects/make_rect_btn.c					\
		includes/get_rects/make_rect_duck.c					\
		includes/get_rects/make_rect_kill_board_changed.c	\
		includes/get_rects/change_rect_duck.c				\
		includes/get_rects/change_rect_kill_board_changed.c	\
		includes/my_duck/move_duck.c						\
		includes/my_duck/make_duck.c						\
		includes/my_screen/make_screen.c					\
		includes/my_screen/make_quit_btn.c					\
		includes/my_screen/make_pause_btn.c					\
		includes/my_texts/make_text_welcome.c				\
		includes/my_texts/make_text_presentation1.c			\
		includes/my_texts/make_text_presentation2.c			\
		includes/my_texts/make_text_presentation3.c			\
		includes/my_texts/make_text_start.c					\
		includes/my_texts/make_text_pause.c					\
		includes/my_texts/make_text_win.c					\
		includes/my_texts/make_text_lose.c					\
		includes/my_texts/make_text.c						\
		includes/my_kill_board/make_kill_board.c			\
		includes/my_events/make_event.c						\
		includes/my_events/analyse_events.c					\
		includes/my_events/is_clic_in_duck.c				\
		includes/my_events/is_clic_in_quit_btn.c			\
		includes/my_events/is_clic_in_pause_btn.c			\
		includes/my_musics/make_music.c						\
		includes/my_time/clock.c							\
		includes/displays/display_help.c					\
		includes/displays/display_game.c					\
		includes/displays/display_menu.c					\
		includes/displays/display_win.c						\
		includes/displays/display_lose.c					\
		includes/displays/display_pause.c					\
		includes/destroys/destroy_all.c						\
		includes/destroys/destroy_texts.c					\
		includes/destroys/destroy_sprites.c					\
		includes/destroys/destroy_textures.c				\
		includes/destroys/destroy_musics.c					\
		includes/destroys/destroy_clock_and_window.c		\
		includes/run_game/my_hunter.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

FLAG	=	-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(FLAG)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
