/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_events_dog_master
*/

#include "my_rpg.h"

void display_chat_dogmaster(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    if (r->s.npc_quest >= 0 && r->s.npc_quest <= 3)
        sfRenderWindow_drawText(r->m.window, r->d[8].text, NULL);
    if (r->s.npc_quest == 4)
        sfRenderWindow_drawText(r->m.window, r->d[9].text, NULL);
    if (r->s.npc_quest == 6)
        sfRenderWindow_drawText(r->m.window, r->d[10].text, NULL);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}

void dogmaster_events(my_rpg_t *r)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 5)
        r->s.npc_perso = 0;
    if (sfKeyboard_isKeyPressed(sfKeyY) == 1 && r->s.npc_perso == 5) {
        r->s.npc_perso = 0;
        r->s.npc_quest = 5;
    }
}

void dogmaster_npc_loop(my_rpg_t *r)
{
    display_box(r);
    dogmaster_events(r);
    display_chat_dogmaster(r);
}
