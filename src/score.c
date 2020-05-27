/*
** EPITECH PROJECT, 2020
** score
** File description:
** runner
*/

#include "my.h"

window_t *fill_text(window_t *ow)
{
    ow->font = sfFont_createFromFile("res/arial.ttf");
    ow->score = sfText_create();
    ow->pnt = sfText_create();
    return (ow);
}

char *trans_nb_to_char(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * nb + 1);

    for (; nb; i++) {
        str[i] = nb % 10 + '0';
        nb /= 10;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}

window_t *text_p(window_t *ow)
{
    sfText_setString(ow->score, "SCORE :");
    sfText_setCharacterSize(ow->score, 30);
    sfText_setPosition(ow->score, (sfVector2f) {1600, 50});
    sfText_setColor(ow->score, sfWhite);
    sfText_setFont(ow->score, ow->font);
    sfText_setString(ow->pnt, trans_nb_to_char(ow->p));
    sfText_setCharacterSize(ow->pnt, 30);
    sfText_setPosition(ow->pnt, (sfVector2f) {1750, 50});
    sfText_setColor(ow->pnt, sfWhite);
    sfText_setFont(ow->pnt, ow->font);
    return (ow);
}
