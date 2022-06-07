/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** main
*/

#include <stdlib.h>
#include "my_rpg.h"
#include "my_menu.h"
#include "map.h"

int main(int ac, char **av)
{
    (void)av;

    if (ac == 1)
        my_rpg();
    return 0;
}
