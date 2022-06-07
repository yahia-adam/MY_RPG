/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** game_loop
*/

#include <stdio.h>
#include "my_rpg.h"
#include "my_menu.h"
#include "my_player.h"
#include "map.h"
#include "my.h"
#include "ennemy.h"

static void set_text(my_rpg_t *r)
{
    sfRectangleShape_setTextureRect(r->p.rect_play, r->p.ply_spt);
    sfRectangleShape_setTexture(r->p.rect_play, r->p.txt_play, 0);
}

void set_up_player(my_rpg_t *r)
{
    set_text(r);
    sfRenderWindow_drawRectangleShape(r->m.window, r->p.rect_play, NULL);
}

void set_up_npc(my_rpg_t *r)
{
    init_clock(r);
    for (int i = 1; i < 10; i++) {
        sfRectangleShape_setTextureRect(r->n[i].npc, r->n[i].npc_rect);
        sfRectangleShape_setTexture(r->n[i].npc, r->n->npc_txt, 0);
        sfRenderWindow_drawRectangleShape(r->m.window, r->n[i].npc, NULL);
    }
}

void game_loop(my_rpg_t *r)
{
    check_house(r);
    display_map(r);
    ennemy_animation(r);
    manage_hud(r);
    which_key_pressed(r);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
    set_up_npc(r);
    set_up_player(r);
    game_events(r);
    if (sfKeyboard_isKeyPressed(sfKeyJ) == TRUE)
        manage_fight(r);
    npc_loop(r);
    sfRenderWindow_display(r->m.window);
    sfRenderWindow_clear(r->m.window, sfBlack);
}
