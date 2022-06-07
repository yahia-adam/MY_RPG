/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** pause_loop
*/

#include "my_rpg.h"

void pause_loop(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    for (int i = 0; i < 3; i++)
        sfRenderWindow_drawText(r->m.window, r->pause[i].text, NULL);
    sfRenderWindow_display(r->m.window);
    pause_events(r);
}
