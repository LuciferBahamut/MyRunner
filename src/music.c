/*
** EPITECH PROJECT, 2020
** music
** File description:
** my_runner
*/

#include "my.h"

void load_music(window_t *ow)
{
    sfMusic_play(ow->music);
    sfMusic_setLoop(ow->music, sfTrue);
}
