/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** reset_all
*/

#include "my_rpg.h"
#include "macro.h"

void reset_all(my_rpg_t *r)
{
    r->s.fps_state = FPS_30;
    r->s.player = 1;
    r->s.npc_state = 0;
    r->s.npc_perso = 0;
    r->s.npc_quest = 0;
    r->p.ply_pos = (sfVector2f) {4662, 3984};
    r->n[2].npc_pos = (sfVector2f) {2712, 8244};
    r->n[4].npc_pos = (sfVector2f) {7776, 1134};
    sfRectangleShape_setPosition(r->p.rect_play, r->p.ply_pos);
    sfRectangleShape_setPosition(r->n[2].npc, r->n[2].npc_pos);
    sfRectangleShape_setPosition(r->n[4].npc, r->n[4].npc_pos);
}
