/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_npc2
*/

#include "my_rpg.h"

void init_dog_npc(my_rpg_t *r)
{
    r->n[4].npc = sfRectangleShape_create();
    r->n[4].npc_size = (sfVector2f) {85.6667, 81};
    r->n[4].npc_pos = (sfVector2f) {7776, 1134};
    r->n[4].npc_rect.height = 81;
    r->n[4].npc_rect.width = 85.6667;
    r->n[4].npc_rect.left = 0;
    r->n[4].npc_rect.top = 324;
    r->n[4].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[4].npc, r->n[4].npc_size);
    sfRectangleShape_setPosition(r->n[4].npc, r->n[4].npc_pos);
    sfRectangleShape_setTextureRect(r->n[4].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[4].npc, r->n->npc_txt, 0);
}

void init_dog_master_npc(my_rpg_t *r)
{
    r->n[5].npc = sfRectangleShape_create();
    r->n[5].npc_size = (sfVector2f) {85.6667, 81};
    r->n[5].npc_pos = (sfVector2f) {1878, 6348};
    r->n[5].npc_rect.height = 81;
    r->n[5].npc_rect.width = 85.6667;
    r->n[5].npc_rect.left = 0;
    r->n[5].npc_rect.top = 243;
    r->n[5].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[5].npc, r->n[5].npc_size);
    sfRectangleShape_setPosition(r->n[5].npc, r->n[5].npc_pos);
    sfRectangleShape_setTextureRect(r->n[5].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[5].npc, r->n->npc_txt, 0);
}

void init_basic_npc(my_rpg_t *r)
{
    r->n[6].npc = sfRectangleShape_create();
    r->n[6].npc_size = (sfVector2f) {85.6667, 81};
    r->n[6].npc_pos = (sfVector2f) {5888, 4974};
    r->n[6].npc_rect.height = 81;
    r->n[6].npc_rect.width = 85.6667;
    r->n[6].npc_rect.left = 0;
    r->n[6].npc_rect.top = 729;
    r->n[6].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[6].npc, r->n[6].npc_size);
    sfRectangleShape_setPosition(r->n[6].npc, r->n[6].npc_pos);
    sfRectangleShape_setTextureRect(r->n[6].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[6].npc, r->n->npc_txt, 0);
}

void init_wife_npc(my_rpg_t *r)
{
    r->n[7].npc = sfRectangleShape_create();
    r->n[7].npc_size = (sfVector2f) {85.6667, 81};
    r->n[7].npc_pos = (sfVector2f) {5688, 4974};
    r->n[7].npc_rect.height = 81;
    r->n[7].npc_rect.width = 85.6667;
    r->n[7].npc_rect.left = 0;
    r->n[7].npc_rect.top = 810;
    r->n[7].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[7].npc, r->n[7].npc_size);
    sfRectangleShape_setPosition(r->n[7].npc, r->n[7].npc_pos);
    sfRectangleShape_setTextureRect(r->n[7].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[7].npc, r->n->npc_txt, 0);
}

void init_kid_npc(my_rpg_t *r)
{
    r->n[8].npc = sfRectangleShape_create();
    r->n[8].npc_size = (sfVector2f) {85.6667, 81};
    r->n[8].npc_pos = (sfVector2f) {7434, 7692};
    r->n[8].npc_rect.height = 81;
    r->n[8].npc_rect.width = 85.6667;
    r->n[8].npc_rect.left = 0;
    r->n[8].npc_rect.top = 405;
    r->n[8].npc_txt =
    sfTexture_createFromFile("assets/npc_assets/NPC.png", NULL);
    sfRectangleShape_setSize(r->n[8].npc, r->n[8].npc_size);
    sfRectangleShape_setPosition(r->n[8].npc, r->n[8].npc_pos);
    sfRectangleShape_setTextureRect(r->n[8].npc, r->n->npc_rect);
    sfRectangleShape_setTexture(r->n[8].npc, r->n->npc_txt, 0);
}
