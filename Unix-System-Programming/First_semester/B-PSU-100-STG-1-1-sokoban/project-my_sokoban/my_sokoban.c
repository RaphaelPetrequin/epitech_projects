/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** my_sokoban
*/

#include "includes/my.h"

void display_game(info_game *game)
{
    clear();
    for (int i = 0; game->map[i] != 0; i++)
        printw("%s\n", game->map[i]);
    refresh();
}

void event_loop(info_game *game)
{
    int x = game->p_pos[0];
    int y = game->p_pos[1];

    press_space(game);
    go_up(game);
    go_down(game);
    go_left(game);
    go_right(game);
}

void run_game(info_game *game)
{
    struct winsize ws;

    noecho();
    keypad(stdscr, TRUE);
    ESCDELAY = 5;
    while (game->key != 27) {
        ioctl(0, TIOCGWINSZ, &ws);
        if (ws.ws_col < game->map_x || ws.ws_row < game->map_y)
            display_enlarge_terminal(game, &ws);
        if (ws.ws_col >= game->map_x && ws.ws_row >= game->map_y) {
            display_game(game);
            game->key = getch();
            event_loop(game);
            check_win(game);
        }
    }
    endwin();
}

void make_game(info_game *game, char *filepath)
{
    game->map = load_2d_arr_from_file(filepath);
    search_issues(game);
    game->ref_map = load_2d_arr_from_file(filepath);
    game->p_pos = search_p_pos(game->map);
    game->win = initscr();
    game->map_x = search_nbrows(game->map) - 1;
    game->map_y = my_strlen(game->map[0]);
    game->key;
    game->filepath = filepath;
}

int main(int ac, char **av)
{
    info_game game;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        display_usage();
        return (0);
    } else if (ac == 2 && av[1][0] != '-' && av[1][0] != 'h') {
        make_game(&game, av[1]);
        run_game(&game);
        free(game.map);
        free(game.ref_map);
        free(game.p_pos);
        return (0);
    } else
        return (84);
}
