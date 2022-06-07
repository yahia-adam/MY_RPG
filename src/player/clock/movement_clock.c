/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** movement_clock
*/

#include "my_rpg.h"
#include "my_player.h"
#include "map.h"

static void player_mov_x_axis(player_t *p, my_rpg_t *r)
{
    if (p->mov.left == sfTrue && (colision(r, 'l') == true)) {
        p->ply_pos.x -= 6;
        p->ply_spt.top = 81;
        p->direction = LEFT;
        sfRectangleShape_setPosition(p->rect_play, p->ply_pos);
    }
    if (p->mov.right == sfTrue && (colision(r, 'r') == true)) {
        p->ply_pos.x += 6;
        p->ply_spt.top = 162;
        p->direction = RIGHT;
        sfRectangleShape_setPosition(p->rect_play, p->ply_pos);
    }
}

static void player_mov_y_axis(player_t *p, my_rpg_t *r)
{
    if (p->mov.up == sfTrue && (colision(r, 'u') == true)) {
        p->ply_pos.y -= 6;
        p->ply_spt.top = 243;
        p->direction = UP;
        sfRectangleShape_setPosition(p->rect_play, p->ply_pos);
    }
    if (p->mov.down == sfTrue && (colision(r, 'd') == true)) {
        p->ply_pos.y += 6;
        p->ply_spt.top = 0;
        p->direction = DOWN;
        sfRectangleShape_setPosition(p->rect_play, p->ply_pos);
    }
}

void player_movement_clock(my_rpg_t *rpg)
{
    rpg->c[0].ply_time = sfClock_getElapsedTime(rpg->c[0].ply_clock);
    rpg->c[0].ply_sec = rpg->c[0].ply_time.microseconds / 10000000.0;
    if (rpg->c[0].ply_sec > 0.00001) {
        if (rpg->p.mov.up == sfTrue || rpg->p.mov.down == sfTrue)
            player_mov_y_axis(&rpg->p, rpg);
        if (rpg->p.mov.left == sfTrue || rpg->p.mov.right == sfTrue)
            player_mov_x_axis(&rpg->p, rpg);
        player_movement(rpg);
        sfView_setCenter(rpg->cam[1].cam, rpg->p.ply_pos);
        sfClock_restart(rpg->c[0].ply_clock);
    }
}
