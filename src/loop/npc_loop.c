/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_loop
*/

#include "my_rpg.h"

void npc_loop(my_rpg_t *r)
{
    void(*function[10])(my_rpg_t *r) = {&npc_events, &mayor_npc_loop,
    &baby_npc_loop, &mother_npc_loop, &dog_npc_loop, &dogmaster_npc_loop,
    &mari_npc_loop, &wife_npc_loop, &kid_npc_loop, &oldman_npc_loop};

    function[r->s.npc_perso](r);
}
