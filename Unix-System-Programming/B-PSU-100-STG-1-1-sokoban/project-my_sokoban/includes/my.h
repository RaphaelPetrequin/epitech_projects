/*
** EPITECH PROJECT, 2023
** MY
** File description:
** my
*/

#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>

#ifndef MY_H_
    #define MY_H_

    typedef struct GAME {
    WINDOW *win;
    char *filepath;
    char **map;
    char **ref_map;
    int map_x;
    int map_y;
    int *p_pos;
    int key;
    int nbO;

} info_game;

void display_usage(void);
void display_enlarge_terminal(info_game *game, struct winsize *ws);
void display_game(info_game *game);
int search_issues(info_game *game);
void check_char(int *nbO, int *nbX, int *nbP, char ch);
void check_win(info_game *game);
int search_nbrows(char **map);
int *search_p_pos(char **map);
int my_strlen(char const *str);
char *load_file_in_mem(char const *filepath);
char **load_2d_arr_from_file(char const *filepath);
char **my_str_to_word_array_for_sokoban(const char *str);
void press_space(info_game *game);
void go_up(info_game *);
void go_down(info_game *);
void go_left(info_game *);
void go_right(info_game *);
void handle_boxes_go_up(char **map, int, int, int *);
void handle_boxes_go_down(char **map, int, int, int *);
void handle_boxes_go_left(char **map, int, int, int *);
void handle_boxes_go_right(char **map, int, int, int *);

#endif /* !MY_H_ */
