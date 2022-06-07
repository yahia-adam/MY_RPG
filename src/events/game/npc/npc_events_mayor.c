/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_perso_one
*/

#include "my_rpg.h"
#include <stdio.h>

void display_chat_mayor(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    if (r->s.npc_quest == 0)
        sfRenderWindow_drawText(r->m.window, r->d[0].text, NULL);
    if (r->s.npc_quest == 1 || r->s.npc_quest == 4)
        sfRenderWindow_drawText(r->m.window, r->d[1].text, NULL);
    if (r->s.npc_quest == 3)
        sfRenderWindow_drawText(r->m.window, r->d[7].text, NULL);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}

void mayor_events(my_rpg_t *r)
{
    if (sfKeyboard_isKeyPressed(sfKeyY) == 1 && r->s.npc_perso == 1 &&
    r->s.npc_quest == 3) {
        r->s.npc_perso = 0;
        r->s.npc_quest = 4;
    }
    if (sfKeyboard_isKeyPressed(sfKeyY) == 1 && r->s.npc_perso == 1 &&
    r->s.npc_quest != 2) {
        r->s.npc_perso = 0;
        r->s.npc_quest = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 1)
        r->s.npc_perso = 0;
}

void mayor_npc_loop(my_rpg_t *r)
{
    display_box(r);
    mayor_events(r);
    display_chat_mayor(r);
}
