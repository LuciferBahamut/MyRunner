/*
** EPITECH PROJECT, 2020
** function
** File description:
** runner
*/

#include "my.h"

window_t *drawing(window_t *ow)
{
    sfRenderWindow_drawSprite(ow->win, ow->background_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->background2_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->mid_ground_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->mid_ground2_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->floor_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->floor2_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->floor3_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->floor4_s, NULL);
    sfRenderWindow_drawSprite(ow->win, ow->sprite, NULL);
    sfRenderWindow_drawText(ow->win, ow->score, NULL);
    sfRenderWindow_drawText(ow->win, ow->pnt, NULL);
    return (ow);
}

window_t *set_texture(window_t *ow)
{
    sfSprite_setTextureRect(ow->sprite, ow->rect);
    sfSprite_setPosition(ow->background_s, ow->position);
    sfSprite_setPosition(ow->background2_s, ow->positionbis);
    sfSprite_setPosition(ow->mid_ground_s, ow->positionA);
    sfSprite_setPosition(ow->mid_ground2_s, ow->positionB);
    sfSprite_setPosition(ow->floor_s, ow->position1);
    sfSprite_setPosition(ow->floor2_s, ow->position2);
    sfSprite_setPosition(ow->floor3_s, ow->position3);
    sfSprite_setPosition(ow->floor4_s, ow->position4);
    sfSprite_setPosition(ow->sprite, ow->pos_sprite);
    return (ow);
}

window_t *set_position(window_t *ow)
{
    ow->position.x = (ow->move * 0.5) + (ow->point * 5) - 1920;
    ow->positionbis.x = (ow->move * 0.5) + (ow->point * 5) + 1918;
    ow->positionA.x = ow->move + (ow->point * 5) - 1920;
    ow->positionB.x = ow->move + (ow->point * 5) + 1918;
    ow->position1.x = (ow->move * 2) + (ow->point * 5) - 1920;
    ow->position2.x = (ow->move * 2) + ow->point * 5;
    ow->position3.x = (ow->move * 2) + (ow->point * 5) + 1920;
    ow->position4.x = (ow->move * 2) + (ow->point * 5) + 3840;
    return (ow);
}

window_t *position(window_t *ow)
{
    ow = set_texture(ow);
    ow = set_position(ow);
    ow->move -= 6;
    if (ow->move < -1920) {
        ow->position2.x = (ow->move * 2) + (ow->point * 5) + 5760;
        ow->position3.x = (ow->move * 2) + (ow->point * 5) + 7680;
    }
    if (ow->move < -3840)
        ow->move = 0;
    return (ow);
}
