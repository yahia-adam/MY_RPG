/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** game_events
*/

#include "my_rpg.h"
#include "my_player.h"
#include "macro.h"

void game_events(my_rpg_t *r)
{
    while (sfRenderWindow_pollEvent(r->m.window, &r->m.event)) {
        if (r->m.event.type == sfEvtClosed)
            sfRenderWindow_close(r->m.window);
        if (r->m.event.type == sfEvtKeyReleased)
            which_key_released(r);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == 1) {
            sfRenderWindow_clear(r->m.window, sfTransparent);
            r->s.state = PAUSE;
        }
    }
}