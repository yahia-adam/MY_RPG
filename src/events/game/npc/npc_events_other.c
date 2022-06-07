/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_perso_two
*/

#include "my_rpg.h"
#include <stdio.h>

void mari_npc_loop(my_rpg_t *r)
{
    display_box(r);
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 6)
        r->s.npc_perso = 0;
}

void wife_npc_loop(my_rpg_t *r)
{
    display_box(r);
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 7)
        r->s.npc_perso = 0;
}

void kid_npc_loop(my_rpg_t *r)
{
    display_box(r);
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 8)
        r->s.npc_perso = 0;
}

void oldman_npc_loop(my_rpg_t *r)
{
    display_box(r);
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 9)
        r->s.npc_perso = 0;
}
