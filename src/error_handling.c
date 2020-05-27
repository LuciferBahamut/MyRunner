/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** runner
*/

#include "my.h"

int error_handling(int ac, char **av)
{
    if (ac < 2) {
        display_error();
        return (1);
    }
    if (ac > 2)
        return (1);
    if (av[1][0] == '-' && av[1][1] == 'h' || av[1][1] == 'i')
        return (SUCCESS);
    return (SUCCESS);
}
