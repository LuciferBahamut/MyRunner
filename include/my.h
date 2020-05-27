/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** screensaver
*/

#ifndef MY_H_
#define MY_H
#define JUMP sfKeySpace

#define SUCCESS 0
#define ERROR 84
#define TRUE 1

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <SFML/Config.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

typedef struct window_s
{
    sfRenderWindow *win;
    sfEvent event;
    sfKeyCode code;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfTexture *background;
    sfTexture *background2;
    sfTexture *mid_ground;
    sfTexture *mid_ground2;
    sfTexture *floor;
    sfTexture *floor2;
    sfTexture *floor3;
    sfTexture *floor4;
    sfSprite *background_s;
    sfSprite *background2_s;
    sfSprite *mid_ground_s;
    sfSprite *mid_ground2_s;
    sfSprite *floor_s;
    sfSprite *floor2_s;
    sfSprite *floor3_s;
    sfSprite *floor4_s;
    sfVector2f origin;
    sfVector2f position;
    sfVector2f positionA;
    sfVector2f positionB;
    sfVector2f positionbis;
    sfVector2f position1;
    sfVector2f position2;
    sfVector2f position3;
    sfVector2f position4;
    sfVector2f pos_sprite;
    sfMusic *music;
    sfText *score;
    sfText *pnt;
    sfFont *font;
    float move;
    int point;
    int p;
    int gravity;
} window_t;

void displayhelp(void);
int display_error(void);
int my_putstr(char const *str);
void my_putchar(char c);
int error_handling(int ac, char **av);
void display_window(window_t *ow);
window_t *drawing(window_t *ow);
window_t *sprite_create(window_t *ow);
window_t *position(window_t *ow);
window_t *jump(window_t *ow);
void load_music(window_t *ow);
window_t *fill_text(window_t *ow);
window_t *text_p(window_t *ow);
char *my_revstr(char *str);

#endif
