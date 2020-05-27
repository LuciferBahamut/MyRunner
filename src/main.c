/*
** EPITECH PROJECT, 2019
** main
** File description:
** runner
*/

#include "my.h"

int main(int ac, char **av)
{
    window_t *ow = malloc(sizeof(window_t));

    if (error_handling(ac, av) == 1)
        return (ERROR);
    if (av[1][0] == '-' && av[1][1] == 'h')
        displayhelp();
    else if (av[1][0] == '-' && av[1][1] == 'i')
        display_window(ow);
    else {
        free(ow);
        return (SUCCESS);
    }
    free(ow);
    return (SUCCESS);
}
