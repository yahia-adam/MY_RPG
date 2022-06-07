/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** player
*/

#include "my_rpg.h"
#include "my_player.h"
#include "macro.h"

static void manage_health_bar(my_rpg_t *r)
{
    r->p.health_manage = 0;
    r->p.h[0].rect_hud = sfRectangleShape_create();
    r->p.ply_hp = 100;
    r->p.h[0].hud_size = (sfVector2f) {324, 36};
    r->p.h[0].hud_pos = (sfVector2f) {0, 0};
    r->p.h[0].hud_spt.height = HRT_HEIGHT;
    r->p.h[0].hud_spt.width = 324;
    r->p.h[0].hud_spt.left = 0;
    r->p.h[0].hud_spt.top = 0;
    r->p.h[0].txt_hud =
    sfTexture_createFromFile("assets/player/health.png", NULL);
    sfRectangleShape_setSize(r->p.h[0].rect_hud, r->p.h[0].hud_size);
    sfRectangleShape_setFillColor(r->p.h[0].rect_hud, sfWhite);
    sfRectangleShape_setPosition(r->p.h[0].rect_hud, r->p.h[0].hud_pos);
}

static void init_player_info(my_rpg_t *rpg)
{
    rpg->p.value = 0;
    rpg->p.direction = 1;
    rpg->p.top = 0;
    rpg->p.attack = sfFalse;
    rpg->p.rect_play = sfRectangleShape_create();
    rpg->p.ply_size = (sfVector2f) {80, 75};
    rpg->p.ply_pos = (sfVector2f) {4662, 3984};
    rpg->p.ply_spt.height = 81;
    rpg->p.ply_spt.width = 85.6667;
    rpg->p.ply_spt.left = 85.6667;
    rpg->p.ply_spt.top = 0;
    rpg->p.txt_play = sfTexture_createFromFile("assets/player/mc.png", NULL);
    sfRectangleShape_setSize(rpg->p.rect_play, rpg->p.ply_size);
    sfRectangleShape_setFillColor(rpg->p.rect_play, sfWhite);
    sfRectangleShape_setPosition(rpg->p.rect_play, rpg->p.ply_pos);
}

static void init_view(my_rpg_t *rpg)
{
    rpg->cam[0].cam = sfView_create();
    rpg->cam[1].cam = sfView_create();
    rpg->cam[0].cam = (sfView *) sfRenderWindow_getDefaultView(rpg->m.window);
    sfView_setSize(rpg->cam[1].cam, (sfVector2f) {1920, 1080});
    sfView_setCenter(rpg->cam[1].cam, rpg->p.ply_pos);
}

static void manage_clock(my_rpg_t *rpg)
{
    rpg->c[0].ply_clock = sfClock_create();
    rpg->c[1].ply_clock = sfClock_create();
    rpg->c[2].ply_clock = sfClock_create();
    rpg->c[3].ply_clock = sfClock_create();
}

void init_player_struct(my_rpg_t *rpg)
{
    manage_clock(rpg);
    init_player_info(rpg);
    init_view(rpg);
    sfRenderWindow_setView(rpg->m.window, rpg->cam[1].cam);
    manage_health_bar(rpg);
}
