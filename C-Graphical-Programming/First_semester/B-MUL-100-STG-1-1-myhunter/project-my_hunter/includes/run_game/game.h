/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** game
*/

#include <unistd.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "../my_screen/my_screen.h"
#include "../my_texts/my_text.h"
#include "../my_kill_board/kill_board.h"
#include "../my_duck/my_duck.h"
#include "../my_events/my_event.h"
#include "../my_musics/my_music.h"
#include "../my_time/my_time.h"

#ifndef GAME
    #define GAME

    typedef struct GAME {
    info_screen screen;
    info_text text;
    info_kill_board kill_board;
    info_duck duck;
    info_event event;
    info_music music;
    info_time time;

} info_game;

char *my_strcpy(char *, char const *);
void clock(info_game *);
void make_rect_duck(sfIntRect *);
void make_rect_btn(sfIntRect *);
void make_rect_kill_board_changed(sfIntRect *, info_game *);
void make_quit_btn(info_game *);
void make_pause_btn(info_game *);
void make_screen(info_game *);
void make_text_welcome(info_game *, sfFont *);
void make_text_presentation1(info_game *, sfFont *);
void make_text_presentation2(info_game *, sfFont *);
void make_text_presentation3(info_game *, sfFont *);
void make_text_start(info_game *, sfFont *);
void make_text_pause(info_game *, sfFont *);
void make_text_win(info_game *, sfFont *);
void make_text_lose(info_game *, sfFont *);
void make_text(info_game *);
void make_kill_board(info_game *);
void make_duck(info_game *);
void make_event(info_game *);
void make_music(info_game *);
void change_rect_duck(sfIntRect *, int, int);
void change_rect_kill_board_changed(sfIntRect *, int, int);
void move_duck(info_game *);
void display_help(void);
void display_game(info_game *);
void display_menu(info_game *);
void display_win(info_game *);
void display_lose(info_game *);
void display_pause(info_game *);
void destroy_all(info_game *);
void destroy_texts(info_game *);
void destroy_sprites(info_game *);
void destroy_textures(info_game *);
void destroy_musics(info_game *);
void destroy_clock_and_window(info_game *);
void analyse_events(info_game *);
void is_clic_in_duck(info_game *);
void is_clic_in_quit_btn(info_game *);
void is_clic_in_pause_btn(info_game *);

#endif /*GAME*/
