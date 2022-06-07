/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_npc3
*/

#include "my_rpg.h"

void init_oldman_npc(my_rpg_t *r)
{
    r->n[9].npc = sfRectangleShape_create();
    r->n[9].npc_size = (sfVector2f) {85.6667, 81};
    r->n[9].npc_pos = (sfVector2f) {7452, 2298};
    r->n[9].npc_rect.height = 81;
    r->n[9].npc_rect.width = 85.6667;
    r->n[9].npc_rect.left = 0;
    r->n[9].npc_rect.top = 0;
    r->n[9].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[9].npc, r->n[9].npc_size);
    sfRectangleShape_setPosition(r->n[9].npc, r->n[9].npc_pos);
    sfRectangleShape_setTextureRect(r->n[9].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[9].npc, r->n->npc_txt, 0);
}
