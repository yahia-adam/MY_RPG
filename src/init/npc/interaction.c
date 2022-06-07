/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** interaction
*/

#include "my_rpg.h"

void interaction_button(my_rpg_t *r)
{
    r->b[0].button = sfRectangleShape_create();
    r->b[0].butt_size = (sfVector2f) {40, 40};
    r->b[0].butt_txt =
    sfTexture_createFromFile("assets/game_assets/talk_touch.png", NULL);
    sfRectangleShape_setSize(r->b[0].button, r->b[0].butt_size);
    sfRectangleShape_setTexture(r->b[0].button, r->b[0].butt_txt, 0);
}

void interaction(my_rpg_t *r)
{
    interaction_button(r);
}
