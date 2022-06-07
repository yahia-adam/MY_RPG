/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** player_texture
*/

#include "my_rpg.h"

void init_player_texture(my_rpg_t *r)
{
    r->p.txt_play =
    sfTexture_createFromFile("assets/player/mc.png", NULL);
}
