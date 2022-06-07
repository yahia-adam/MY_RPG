/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_npc1
*/

#include "my_rpg.h"

void init_villager_npc(my_rpg_t *r)
{
    r->n[0].npc = sfRectangleShape_create();
    r->n[0].npc_size = (sfVector2f) {85.6667, 81};
    r->n[0].npc_pos = (sfVector2f) {6440, 1430};
    r->n[0].npc_rect.height = 81;
    r->n[0].npc_rect.width = 85.6667;
    r->n[0].npc_rect.left = 0;
    r->n[0].npc_rect.top = 0;
    r->n[0].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[0].npc, r->n[0].npc_size);
    sfRectangleShape_setPosition(r->n[0].npc, r->n[0].npc_pos);
    sfRectangleShape_setTextureRect(r->n[0].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[0].npc, r->n->npc_txt, 0);
}

void init_president_npc(my_rpg_t *r)
{
    r->n[1].npc = sfRectangleShape_create();
    r->n[1].npc_size = (sfVector2f) {85.6667, 81};
    r->n[1].npc_pos = (sfVector2f) {5658, 3690};
    r->n[1].npc_rect.height = 81;
    r->n[1].npc_rect.width = 85.6667;
    r->n[1].npc_rect.left = 0;
    r->n[1].npc_rect.top = 567;
    r->n[1].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[1].npc, r->n[1].npc_size);
    sfRectangleShape_setPosition(r->n[1].npc, r->n[1].npc_pos);
    sfRectangleShape_setTextureRect(r->n[1].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[1].npc, r->n->npc_txt, 0);
}

void init_baby_npc(my_rpg_t *r)
{
    r->n[2].npc = sfRectangleShape_create();
    r->n[2].npc_size = (sfVector2f) {85.6667, 81};
    r->n[2].npc_pos = (sfVector2f) {2712, 8244};
    r->n[2].npc_rect.height = 81;
    r->n[2].npc_rect.width = 85.6667;
    r->n[2].npc_rect.left = 0;
    r->n[2].npc_rect.top = 162;
    r->n[2].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[2].npc, r->n[2].npc_size);
    sfRectangleShape_setPosition(r->n[2].npc, r->n[2].npc_pos);
    sfRectangleShape_setTextureRect(r->n[2].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[2].npc, r->n->npc_txt, 0);
}

void init_mother_npc(my_rpg_t *r)
{
    r->n[3].npc = sfRectangleShape_create();
    r->n[3].npc_size = (sfVector2f) {85.6667, 81};
    r->n[3].npc_pos = (sfVector2f) {7790, 4338};
    r->n[3].npc_rect.height = 81;
    r->n[3].npc_rect.width = 85.6667;
    r->n[3].npc_rect.left = 0;
    r->n[3].npc_rect.top = 486;
    r->n[3].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[3].npc, r->n[3].npc_size);
    sfRectangleShape_setPosition(r->n[3].npc, r->n[3].npc_pos);
    sfRectangleShape_setTextureRect(r->n[3].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[3].npc, r->n->npc_txt, 0);
}

void init_npc(my_rpg_t *r)
{
    init_villager_npc(r);
    init_president_npc(r);
    init_baby_npc(r);
    init_mother_npc(r);
    init_dog_npc(r);
    init_dog_master_npc(r);
    init_basic_npc(r);
    init_wife_npc(r);
    init_kid_npc(r);
    init_oldman_npc(r);
}
