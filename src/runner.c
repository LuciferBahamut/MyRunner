/*
** EPITECH PROJECT, 2019
** runner
** File description:
** runner
*/

#include "my.h"

window_t *fill_struct(window_t *ow)
{
    ow->texture = sfTexture_create(1920, 1080);
    ow->rect.width = 100;
    ow->rect.height = 100;
    ow->rect.top = 0;
    ow->point = 1;
    ow->p = 0;
    ow = sprite_create(ow);
    ow->gravity = 0;
    ow->position1.y = 950;
    ow->position2.y = 950;
    ow->position3.y = 950;
    ow->position4.y = 950;
    ow->pos_sprite.y = 900;
    ow->pos_sprite.x = 100;
    ow->positionA.y = 150;
    ow->positionB.y = 150;
    ow->origin.y = 50;
    ow->origin.x = 50;
    ow->music = sfMusic_createFromFile("res/sound.ogg");
    ow = fill_text(ow);
    return (ow);
}

void display_window(window_t *ow)
{
    sfVideoMode vm = {1920, 1080, 32};

    ow->win = sfRenderWindow_create(vm, "My_Runner", sfResize | sfClose, NULL);
    ow = fill_struct(ow);
    sfSprite_setOrigin(ow->sprite, ow->origin);
    sfRenderWindow_setFramerateLimit(ow->win, 60);
    load_music(ow);
    while (sfRenderWindow_isOpen(ow->win)) {
        ow->gravity = ow->gravity + 1;
        sfRenderWindow_clear(ow->win, sfBlack);
        while (sfRenderWindow_pollEvent(ow->win, &ow->event))
            if (ow->event.type == sfEvtClosed)
                sfRenderWindow_close(ow->win);
        ow = position(ow);
        ow = jump(ow);
        ow = drawing(ow);
        sfRenderWindow_drawSprite(ow->win, ow->sprite, NULL);
        sfRenderWindow_display(ow->win);
    }
    sfMusic_destroy(ow->music);
    sfRenderWindow_destroy(ow->win);
}
