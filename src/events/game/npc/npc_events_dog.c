/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** npc_events_dog
*/

#include "my_rpg.h"

void display_chat_dog(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    if (r->s.npc_quest >= 0 && r->s.npc_quest <= 5)
        sfRenderWindow_drawText(r->m.window, r->d[11].text, NULL);
    if (r->s.npc_quest == 6)
        sfRenderWindow_drawText(r->m.window, r->d[12].text, NULL);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}

void dog_events(my_rpg_t *r)
{
    if (r->s.npc_quest == 5)
        r->s.npc_quest = 6;
    if (r->s.npc_quest == 6) {
        r->n[4].npc_pos = (sfVector2f) {r->n[5].npc_pos.x - 100,
        r->n[5].npc_pos.y};
        sfRectangleShape_setPosition(r->n[4].npc, r->n[4].npc_pos);
        sfRenderWindow_drawRectangleShape(r->m.window, r->n[4].npc, NULL);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) == 1 && r->s.npc_perso == 4)
        r->s.npc_perso = 0;
}

void dog_npc_loop(my_rpg_t *r)
{
    display_box(r);
    dog_events(r);
    display_chat_dog(r);
}
