/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** option_loop
*/

#include "my_rpg.h"
#include "my_menu.h"

static void settings_player_movement(my_rpg_t *r)
{
    r->c[0].ply_time = sfClock_getElapsedTime(r->c[0].ply_clock);
    r->c[0].ply_sec = r->c[0].ply_time.microseconds / 10000000.0;
    if (r->c[0].ply_sec > 0.015) {
        r->p.ply_spt.left += 171.3334;
        if (r->p.ply_spt.left > 227)
            r->p.ply_spt.left = 0;
        sfRectangleShape_setTextureRect(r->ch[0].player, r->p.ply_spt);
        sfRectangleShape_setTexture(r->ch[0].player, r->p.txt_play, 0);
        sfRenderWindow_drawRectangleShape(r->m.window, r->ch[0].player, NULL);
        sfClock_restart(r->c[0].ply_clock);
    }
}

static void set_up_player_in_option(my_rpg_t *r)
{
    r->ch[0].player = sfRectangleShape_create();
    r->ch[0].player_pos = (sfVector2f) {1500, 500};
    sfRectangleShape_setSize(r->ch[0].player, r->p.ply_size);
    sfRectangleShape_setFillColor(r->p.rect_play, sfWhite);
    sfRectangleShape_setPosition(r->ch[0].player, r->ch[0].player_pos);
    sfRectangleShape_setTextureRect(r->ch[0].player, r->p.ply_spt);
    sfRectangleShape_setTexture(r->ch[0].player, r->p.txt_play, 0);
    sfRenderWindow_drawRectangleShape(r->m.window, r->ch[0].player, NULL);
}

static void player_texture(my_rpg_t *r)
{
    char *player_choice = check_which_player(r);

    r->p.txt_play =
    sfTexture_createFromFile(player_choice, NULL);
}

void option_loop(my_rpg_t *r)
{
    draw_background(r);
    for (int i = 0; i < 5; i++)
        sfRenderWindow_drawText(r->m.window, r->opt[i].text, NULL);
    for (int i = 0; i < 2; i++)
        sfRenderWindow_drawRectangleShape(r->m.window, r->ch[i].arrow, NULL);
    set_up_player_in_option(r);
    settings_player_movement(r);
    option_events(r);
    player_texture(r);
    sfRenderWindow_display(r->m.window);
}
