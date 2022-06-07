/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** house_loop
*/

#include "my_rpg.h"
#include "map.h"
#include "my_player.h"

void house_zero(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);

    display_house(r, 0);
    which_key_pressed(r);
    init_clock(r);
    set_up_player(r);
    game_events(r);
    if (pos.x >= 846 && pos.x <= 906)
        if (pos.y >= 924 && pos.y <= 984) {
            r->p.ply_pos = (sfVector2f) {5484, 3606};
            r->s.state = 3;
        }
    sfRenderWindow_display(r->m.window);
    sfRenderWindow_clear(r->m.window, sfBlack);
    return;
}

void house_one(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);

    display_house(r, 1);
    r->p.ply_hp += 3;
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    which_key_pressed(r);
    init_clock(r);
    set_up_player(r);
    game_events(r);
    if (pos.x >= 744 && pos.x <= 810)
        if (pos.y >= 930 && pos.y <= 966) {
            r->p.ply_pos = (sfVector2f) {5760, 4960};
            r->s.state = 3;
        }
    sfRenderWindow_display(r->m.window);
    sfRenderWindow_clear(r->m.window, sfBlack);
    return;
}

void house_two(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);

    display_house(r, 2);
    which_key_pressed(r);
    init_clock(r);
    set_up_player(r);
    game_events(r);
    if (pos.x >= 846 && pos.x <= 906)
        if (pos.y >= 924 && pos.y <= 984) {
            r->p.ply_pos = (sfVector2f) {7692, 4296};
            r->s.state = 3;
        }
    sfRenderWindow_display(r->m.window);
    sfRenderWindow_clear(r->m.window, sfBlack);
    return;
}

void house_tree(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);

    display_house(r, 3);
    which_key_pressed(r);
    init_clock(r);
    set_up_player(r);
    game_events(r);
    if (pos.x >= 846 && pos.x <= 906)
        if (pos.y >= 924 && pos.y <= 984) {
            r->p.ply_pos = (sfVector2f) {7320, 2268};
            r->s.state = 3;
        }
    sfRenderWindow_display(r->m.window);
    sfRenderWindow_clear(r->m.window, sfBlack);
    return;
}

void house_four(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);

    display_house(r, 4);
    which_key_pressed(r);
    init_clock(r);
    set_up_player(r);
    game_events(r);
    if (pos.x >= 846 && pos.x <= 906)
        if (pos.y >= 924 && pos.y <= 984) {
            r->p.ply_pos = (sfVector2f) {1728, 6306};
            r->s.state = 3;
        }
    sfRenderWindow_display(r->m.window);
    sfRenderWindow_clear(r->m.window, sfBlack);
    return;
}