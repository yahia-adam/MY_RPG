/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** choice_player
*/

#include "my_rpg.h"

void init_left_arrow(my_rpg_t *r)
{
    r->ch[0].arrow = sfRectangleShape_create();
    r->ch[0].arrow_txt =
    sfTexture_createFromFile("assets/option_assets/left.png", NULL);
    r->ch[0].arrow_pos = (sfVector2f) {1300, 500};
    sfRectangleShape_setSize(r->ch[0].arrow, (sfVector2f) {120, 120});
    sfRectangleShape_setPosition(r->ch[0].arrow, r->ch[0].arrow_pos);
    sfRectangleShape_setTexture(r->ch[0].arrow, r->ch[0].arrow_txt, sfFalse);
}

void init_right_arrow(my_rpg_t *r)
{
    r->ch[1].arrow = sfRectangleShape_create();
    r->ch[1].arrow_txt =
    sfTexture_createFromFile("assets/option_assets/right.png", NULL);
    r->ch[1].arrow_pos = (sfVector2f) {1700, 500};
    sfRectangleShape_setSize(r->ch[1].arrow, (sfVector2f) {120, 120});
    sfRectangleShape_setPosition(r->ch[1].arrow, r->ch[1].arrow_pos);
    sfRectangleShape_setTexture(r->ch[1].arrow, r->ch[1].arrow_txt, sfFalse);
}

void init_all_arrow(my_rpg_t *r)
{
    init_left_arrow(r);
    init_right_arrow(r);
}
