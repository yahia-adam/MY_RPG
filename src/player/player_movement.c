/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** player_movement
*/

#include "my_rpg.h"
#include "my_player.h"

void player_movement(my_rpg_t *r)
{
    r->c[1].ply_time = sfClock_getElapsedTime(r->c[1].ply_clock);
    r->c[1].ply_sec = r->c[1].ply_time.microseconds / 10000000.0;
    if (r->c[1].ply_sec > 0.015) {
        r->p.ply_spt.left += 171.3334;
        if (r->p.ply_spt.left > 227)
            r->p.ply_spt.left = 0;
        sfClock_restart(r->c[1].ply_clock);
    }
}
