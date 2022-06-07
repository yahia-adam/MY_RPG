/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-villon.zhang
** File description:
** key_interaction
*/

#include "my_rpg.h"
#include "my_player.h"

void which_key_pressed(my_rpg_t *r)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) == TRUE)
        r->p.mov.up = sfTrue;
    if (sfKeyboard_isKeyPressed(sfKeyS) == TRUE)
        r->p.mov.down = sfTrue;
    if (sfKeyboard_isKeyPressed(sfKeyQ) == TRUE)
        r->p.mov.left = sfTrue;
    if (sfKeyboard_isKeyPressed(sfKeyD) == TRUE)
        r->p.mov.right = sfTrue;
    if (r->p.mov.right == sfTrue || r->p.mov.left == sfTrue ||
    r->p.mov.up == sfTrue || r->p.mov.down == sfTrue)
        player_movement_clock(r);
}

static void movement_key_released(my_rpg_t *r)
{
    if (r->m.event.key.code == sfKeyZ) {
        r->p.mov.up = sfFalse;
        r->p.ply_spt.top = 243;
        r->p.ply_spt.left = PLY_LEFT;
    }
    if (r->m.event.key.code == sfKeyS) {
        r->p.mov.down = sfFalse;
        r->p.ply_spt.top = 0;
        r->p.ply_spt.left = PLY_LEFT;
    }
    if (r->m.event.key.code == sfKeyQ) {
        r->p.mov.left = sfFalse;
        r->p.ply_spt.top = 81;
        r->p.ply_spt.left = PLY_LEFT;
    }
    if (r->m.event.key.code == sfKeyD) {
        r->p.mov.right = sfFalse;
        r->p.ply_spt.top = 162;
        r->p.ply_spt.left = PLY_LEFT;
    }
}

static void fight_key_released(my_rpg_t *r)
{
    if (r->m.event.key.code == sfKeyJ) {
        r->p.value = 0;
        r->p.ply_spt.top = r->p.top;
        r->p.ply_spt.left = PLY_LEFT;
        r->p.attack = sfFalse;
        sfView_setCenter(r->cam[1].cam, r->p.ply_pos);
        sfRectangleShape_setTextureRect(r->p.rect_play, r->p.ply_spt);
        sfRectangleShape_setTexture(r->p.rect_play, r->p.txt_play, 0);
        sfRenderWindow_drawRectangleShape(r->m.window, r->p.rect_play, NULL);
    }
}

void which_key_released(my_rpg_t *r)
{
    movement_key_released(r);
    fight_key_released(r);
}
