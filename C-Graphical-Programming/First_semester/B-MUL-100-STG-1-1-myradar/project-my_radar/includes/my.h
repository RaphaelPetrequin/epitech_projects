/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** my
*/

#include <SFML/Graphics.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>

#ifndef MY
    #define MY

    typedef struct SCREEN {
    sfRenderWindow *window;
    sfSprite *screen;
    char *screen_name;
    sfTexture *t_screen;
    char *t_screen_name;
    sfIntRect t_left;
    sfIntRect t_right;
    sfIntRect b_left;
    sfIntRect b_right;
    sfIntRect m_lenght;
    sfIntRect m_width;
} info_screen;

    typedef struct EVENTS {
    sfEvent event;
    sfBool hide_hitboxes;
    sfBool hide_sprites;
} info_event;

    typedef struct TIME {
    sfClock *clock;
    sfTime time;
    float seconds;
    int timer;
} info_time;

    typedef struct TEXTURES {
    sfTexture *ctower;
    sfTexture *plane;
} info_texture;

    typedef struct CONTROL_TOWERS {
    sfSprite *s_ctower;
    sfCircleShape *circle;
    sfVector2f pos;
    float radius;
    struct CONTROL_TOWERS *next;
} ctowers_l;

    typedef struct PLANES {
    sfSprite *s_plane;
    sfIntRect rect;
    sfRectangleShape *shape;
    sfVector2f pos;
    sfVector2f future_pos;
    int speed;
    int delay;
    float x_vel;
    float y_vel;
    float angle;
    sfBool arrived;
    sfBool secured;
    sfBool destroyed;
    int id;
    struct PLANES *next;
} planes_l;

    typedef struct GAME {
    info_screen screen;
    info_event event;
    info_time time;
    ctowers_l *ctowers;
    planes_l *planes;
    int nb_planes;
    int cpt;
    sfBool end;
    sfText *text;
    sfFont *font;
} info_game;

int display_help(void);
int display_no_arg(void);
int my_getnbr(char *str);
char **my_str_to_word_array_for_int(const char *str);
char **my_str_to_word_array_for_radar(const char *str);
int error_handler(int ac, char *av, int fd, struct stat *st);
char *my_strcpy(char *dest, char const *src);
char **take_coords(struct stat *st, int fd, char **coords);
void make_event(info_event *event);
void analyse_event(info_event *event, info_screen *screen);
void make_planes_and_control_towers(info_game *game, struct stat *st, int fd);
void make_screen(info_screen *screen);
void make_textures(info_texture *texture);
void make_circles(ctowers_l *elt);
void make_rectangle(planes_l *elt);
void make_text_end(info_game *game);
void planes_in_radar(planes_l *, ctowers_l *, info_game *game);
void is_destroyed(info_game *game);
void display_planes(info_game *game);
void display_ctowers(ctowers_l *ctowers, sfRenderWindow *window,
    info_event *);
void destroy_all(planes_l **planes, ctowers_l **ctowers, info_screen *screen,
    info_time *);
void destroy_planes(planes_l **planes);
void destroy_ctowers(ctowers_l **ctowers);
void destroy_screen(info_screen *screen);
void destroy_textures(info_texture *texture);

#endif /* MY_H */
