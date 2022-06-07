/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** game_hud
*/

#include "my_rpg.h"
#include "my_player.h"

static void manage_health(my_rpg_t *r)
{
    if (r->p.ply_hp < 0)
        r->p.ply_hp = 0;
    if (r->p.ply_hp > 100)
        r->p.ply_hp = 100;
    if (r->p.ply_hp % 5 == 0) {
        r->p.health_manage = 20 - r->p.ply_hp / 5;
        r->p.h[0].hud_spt.top = 36 * r->p.health_manage;
    }
}

static void draw_hud(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    sfRenderWindow_drawRectangleShape(r->m.window, r->p.h[0].rect_hud, NULL);
}

static void set_hud(my_rpg_t *r)
{
    sfRectangleShape_setTextureRect(r->p.h[0].rect_hud, r->p.h[0].hud_spt);
    sfRectangleShape_setTexture(r->p.h[0].rect_hud, r->p.h[0].txt_hud, 0);
}

void manage_hud(my_rpg_t *r)
{
    manage_health(r);
    set_hud(r);
    draw_hud(r);
}
