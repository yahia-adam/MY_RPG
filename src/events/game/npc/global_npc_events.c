/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_events
*/

#include <stdio.h>
#include "my_rpg.h"

void display_interaction(my_rpg_t *r, int i)
{
    sfRectangleShape_setPosition(r->b[0].button,
    (sfVector2f) {r->n[i].npc_pos.x -20, r->n[i].npc_pos.y - 20});
    sfRenderWindow_drawRectangleShape(r->m.window, r->b[0].button, NULL);
}

static void check_npc_state(my_rpg_t *r, int i)
{
    for (int j = 0; j <= i; j++) {
        if (r->s.npc_state == 1 && sfKeyboard_isKeyPressed(sfKeyT) == 1 &&
        j == i)
        r->s.npc_perso = i;
    }
}

void npc_events(my_rpg_t *r)
{
    for (int i = 1; i < 10; i++) {
        if (r->p.ply_pos.x >= r->n[i].npc_pos.x - 80 &&
        r->p.ply_pos.x <= r->n[i].npc_pos.x + 85 &&
        r->p.ply_pos.y >= r->n[i].npc_pos.y - 80 &&
        r->p.ply_pos.y <= r->n[i].npc_pos.y + 85) {
            r->s.npc_state = 1;
            display_interaction(r, i);
            check_npc_state(r, i);
        }
    }
    r->s.npc_state = 0;
}
