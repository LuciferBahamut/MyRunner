/*
** EPITECH PROJECT, 2020
** jump
** File description:
** runner
*/

#include "my.h"

window_t *jump(window_t *ow)
{
    ow = text_p(ow);
    if (sfKeyboard_isKeyPressed(sfKeySpace) == TRUE && ow->pos_sprite.y == 900) {
        ow->gravity = -20;
        ow->p = ow->p + 1;
    }
    ow->pos_sprite.y = ow->pos_sprite.y + ow->gravity;
    if (ow->pos_sprite.y < 900)
        sfSprite_rotate(ow->sprite, 2.25);
    if (ow->pos_sprite.y > 900) {
        ow->gravity = 0;
        ow->pos_sprite.y = 900;
    }
    return (ow);
}
