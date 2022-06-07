/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_events_four
*/

#include "my_rpg.h"

void display_chat_baby(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    if (r->s.npc_quest == 0 || r->s.npc_quest == 1)
        sfRenderWindow_drawText(r->m.window, r->d[4].text, NULL);
    if (r->s.npc_quest == 3)
        sfRenderWindow_drawText(r->m.window, r->d[5].text, NULL);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}

void baby_events(my_rpg_t *r)
{
    if (r->s.npc_quest == 2)
        r->s.npc_quest = 3;
    if (r->s.npc_quest == 3) {
        r->n[2].npc_pos = (sfVector2f) {r->n[3].npc_pos.x - 100,
        r->n[3].npc_pos.y};
        sfRectangleShape_setPosition(r->n[2].npc, r->n[2].npc_pos);
        sfRenderWindow_drawRectangleShape(r->m.window, r->n[2].npc, NULL);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 2)
        r->s.npc_perso = 0;
}

void baby_npc_loop(my_rpg_t *r)
{
    display_box(r);
    baby_events(r);
    display_chat_baby(r);
}
