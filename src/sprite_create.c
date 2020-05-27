/*
** EPITECH PROJECT, 2020
** sprite create
** File description:
** runner
*/

#include "my.h"

window_t *sprite_create_floor(window_t *ow)
{
    ow->floor = sfTexture_createFromFile("res/floor.png", NULL);
    ow->floor_s = sfSprite_create();
    sfSprite_setTexture(ow->floor_s, ow->floor, sfTrue);
    ow->floor2 = sfTexture_createFromFile("res/floor.png", NULL);
    ow->floor2_s = sfSprite_create();
    sfSprite_setTexture(ow->floor2_s, ow->floor2, sfTrue);
    ow->floor3 = sfTexture_createFromFile("res/floor.png", NULL);
    ow->floor3_s = sfSprite_create();
    sfSprite_setTexture(ow->floor3_s, ow->floor3, sfTrue);
    ow->floor4 = sfTexture_createFromFile("res/floor.png", NULL);
    ow->floor4_s = sfSprite_create();
    sfSprite_setTexture(ow->floor4_s, ow->floor4, sfTrue);
    return (ow);
}

window_t *sprite_create(window_t *ow)
{
    ow->move = 0;
    ow->background = sfTexture_createFromFile("res/background.png", NULL);
    ow->background_s = sfSprite_create();
    sfSprite_setTexture(ow->background_s, ow->background, sfTrue);
    ow->mid_ground = sfTexture_createFromFile("res/mid_ground.png", NULL);
    ow->mid_ground_s = sfSprite_create();
    sfSprite_setTexture(ow->mid_ground_s, ow->mid_ground, sfTrue);
    ow->mid_ground2 = sfTexture_createFromFile("res/mid_ground.png", NULL);
    ow->mid_ground2_s = sfSprite_create();
    sfSprite_setTexture(ow->mid_ground2_s, ow->mid_ground2, sfTrue);
    ow->background2 = sfTexture_createFromFile("res/background.png", NULL);
    ow->background2_s = sfSprite_create();
    sfSprite_setTexture(ow->background2_s, ow->background2, sfTrue);
    ow = sprite_create_floor(ow);
    ow->texture = sfTexture_createFromFile("res/sprite.png", NULL);
    ow->sprite = sfSprite_create();
    sfSprite_setTexture(ow->sprite, ow->texture, sfTrue);
    return (ow);
}
