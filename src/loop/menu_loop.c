/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** menu_loop
*/

#include "my_rpg.h"
#include "my_menu.h"

void menu_loop(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    draw_background(r);
    for (int i = 0; i < 4; i++)
        sfRenderWindow_drawText(r->m.window, r->text[i].text, NULL);
    sfRenderWindow_display(r->m.window);
    menu_events(r);
}
