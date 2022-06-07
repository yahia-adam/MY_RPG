/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_events_three
*/

#include "my_rpg.h"

void display_chat_mother(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    if (r->s.npc_quest == 0)
        sfRenderWindow_drawText(r->m.window, r->d[2].text, NULL);
    if (r->s.npc_quest == 1)
        sfRenderWindow_drawText(r->m.window, r->d[3].text, NULL);
    if (r->s.npc_quest == 3 || r->s.npc_quest >= 3)
        sfRenderWindow_drawText(r->m.window, r->d[6].text, NULL);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}

void mother_events(my_rpg_t *r)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 3)
        r->s.npc_perso = 0;
    if (sfKeyboard_isKeyPressed(sfKeyY) == 1 && r->s.npc_perso == 3 &&
    r->s.npc_quest == 1) {
        r->s.npc_quest = 2;
        r->s.npc_perso = 0;
    }
}

void mother_npc_loop(my_rpg_t *r)
{
    display_box(r);
    mother_events(r);
    display_chat_mother(r);
}
