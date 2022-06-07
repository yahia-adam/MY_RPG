/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** clock_npc
*/

#include "my_rpg.h"

void init_clock(my_rpg_t *r)
{
    r->c[2].ply_time = sfClock_getElapsedTime(r->c[2].ply_clock);
    r->c[2].ply_sec = r->c[2].ply_time.microseconds / 10000000.0;
    if (r->c[2].ply_sec > 0.015) {
        for (int i = 1; i < 10; i++) {
            r->n[i].npc_rect.left += 86.922;
            if (r->n[i].npc_rect.left > 227)
                r->n[i].npc_rect.left = 0;
        }
        sfClock_restart(r->c[2].ply_clock);
    }
}
