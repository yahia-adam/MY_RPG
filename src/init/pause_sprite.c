/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** pause_sprite
*/

#include "my_rpg.h"

static void pause_background(my_rpg_t *r)
{
    r->p_s[0].rect_pause = sfRectangleShape_create();
    r->p_s[0].pause_size = (sfVector2f) {1920, 1080};
    r->p_s[0].pause_pos = (sfVector2f) {0, 0};
    r->p_s[0].txt_pause =
    sfTexture_createFromFile("assets/game_assets/vignette_shadow.png", NULL);
    sfRectangleShape_setSize(r->p_s[0].rect_pause, r->p_s[0].pause_size);
    sfRectangleShape_setPosition(r->p_s[0].rect_pause, r->p_s[0].pause_pos);
    sfRectangleShape_setTexture(r->p_s[0].rect_pause,
    r->p_s[0].txt_pause,sfFalse);
}

void init_pause_sprite(my_rpg_t *r)
{
    pause_background(r);
}
