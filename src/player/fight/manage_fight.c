/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-villon.zhang
** File description:
** manage_fight
*/

#include "my_rpg.h"
#include "my_player.h"
#include "ennemy.h"

static void manage_player_side(my_rpg_t *r)
{
    if (r->p.direction == DOWN)
        r->p.top = SPT_DOWN;
    else if (r->p.direction == UP)
        r->p.top = SPT_UP;
    if (r->p.direction == RIGHT)
        r->p.top = SPT_LEFT;
    else if (r->p.direction == LEFT)
        r->p.top = SPT_RIGHT;
}

static void manage_attack_side(my_rpg_t *r)
{
    if (r->p.direction == DOWN)
        r->p.top = DOWNWARD;
    else if (r->p.direction == UP)
        r->p.top = UPWARD;
    if (r->p.direction == RIGHT)
        r->p.top = LEFTWARD;
    else if (r->p.direction == LEFT)
        r->p.top = RIGHTWARD;
}

static void attack_which_side(my_rpg_t *r)
{
    r->p.ply_spt.top = r->p.top;
    manage_player_side(r);
    r->p.ply_spt.left = 0;
    sfRectangleShape_setTextureRect(r->p.rect_play, r->p.ply_spt);
    sfRectangleShape_setTexture(r->p.rect_play, r->p.txt_play, 0);
    sfRenderWindow_drawRectangleShape(r->m.window, r->p.rect_play, NULL);
    r->p.ply_spt.left += PLY_LEFT;
    sfRectangleShape_setTextureRect(r->p.rect_play, r->p.ply_spt);
    sfRectangleShape_setTexture(r->p.rect_play, r->p.txt_play, 0);
    sfRenderWindow_drawRectangleShape(r->m.window, r->p.rect_play, NULL);
    r->p.ply_spt.left += PLY_LEFT;
    sfRectangleShape_setTextureRect(r->p.rect_play, r->p.ply_spt);
    sfRectangleShape_setTexture(r->p.rect_play, r->p.txt_play, 0);
    sfRenderWindow_drawRectangleShape(r->m.window, r->p.rect_play, NULL);
}

static void attack_clock(my_rpg_t *r)
{
    if (sfKeyboard_isKeyPressed(sfKeyJ) == TRUE)
        r->p.attack = sfTrue;
    if (r->p.attack == sfTrue && r->p.value < 15) {
        sfView_setCenter(r->cam[1].cam, r->p.ply_pos);
        attack_which_side(r);
        ++r->p.value;
    }
    if (sfKeyboard_isKeyPressed(sfKeyJ) == FALSE &&
    r->m.event.key.code == sfKeyJ) {
        r->p.value = 0;
        manage_player_side(r);
        r->p.ply_spt.top = r->p.top;
        r->p.attack = sfFalse;
        r->p.ply_spt.left = PLY_LEFT;
        sfView_setCenter(r->cam[1].cam, r->p.ply_pos);
        sfRectangleShape_setTextureRect(r->p.rect_play, r->p.ply_spt);
        sfRectangleShape_setTexture(r->p.rect_play, r->p.txt_play, 0);
        sfRenderWindow_drawRectangleShape(r->m.window, r->p.rect_play, NULL);
    }
}

void manage_fight(my_rpg_t *r)
{
    manage_attack_side(r);
    attack_clock(r);
    manage_player_damage(r);
}
