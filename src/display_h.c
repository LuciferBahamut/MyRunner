/*
** EPITECH PROJECT, 2019
** display flag -h
** File description:
** runner
*/

#include "my.h"

void displayhelp(void)
{
    my_putstr("Finite runner create with CSML.\n");
    my_putstr("\nUSAGE\n");
    my_putstr(" ./my_runner -option\n");
    my_putstr("\n\nOPTIONS\n");
    my_putstr(" -i\t\t  launch the game in infinity mode.");
    my_putstr("\n -h\t\t  print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr("  SPACE_KEY\t  jump.\n");
}

int display_error(void)
{
    my_putstr("./my_runner: bad arguments: 0 given but 1 is required\n");
    my_putstr("retry with -h\n");
    return (ERROR);
}
