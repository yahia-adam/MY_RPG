/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** window
*/

#include "my_rpg.h"

void init_window(my_rpg_t *r)
{
    r->m.mode.width = 1920;
    r->m.mode.height = 1080;
    r->m.mode.bitsPerPixel = 64;

    r->m.window = sfRenderWindow_create(r->m.mode, "My RPG",
    sfDefaultStyle, NULL);
}
