/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** menu_events
*/

#include "my_rpg.h"
#include "my_menu.h"
#include "macro.h"
#include "my_player.h"

void check_game_loop(my_rpg_t *r, int i)
{
    if (i == 0) {
        sfRenderWindow_clear(r->m.window, sfTransparent);
        r->s.state = GAME;
    }
}

void check_which_button(my_rpg_t *r)
{
    for (int i = 0; i < 3; i++)
        if (r->m.event.mouseMove.x >= r->text[i].text_pos.x &&
        r->m.event.mouseMove.x <= r->text[i].text_pos.x + 170 &&
        r->m.event.mouseMove.y >= r->text[i].text_pos.y &&
        r->m.event.mouseMove.y <= r->text[i].text_pos.y + 50)
            sfText_setCharacterSize(r->text[i].text, 40);
        else
            sfText_setCharacterSize(r->text[i].text, 35);
}

void which_button_pressed(my_rpg_t *r)
{
    for (int i = 0; i < 3; i++) {
        if (r->m.event.mouseButton.x >= r->text[i].text_pos.x &&
        r->m.event.mouseButton.x <= r->text[i].text_pos.x + 170 &&
        r->m.event.mouseButton.y >= r->text[i].text_pos.y &&
        r->m.event.mouseButton.y <= r->text[i].text_pos.y + 50) {
            sfRenderWindow_clear(r->m.window, sfTransparent);
            r->s.state = i;
        }
        check_game_loop(r, i);
    }
}

void menu_events(my_rpg_t *r)
{
    while (sfRenderWindow_pollEvent(r->m.window, &r->m.event)) {
        if (r->m.event.type == sfEvtClosed)
            quit_game(r);
        if (r->m.event.type == sfEvtMouseMoved)
            check_which_button(r);
        if (r->m.event.type == sfEvtMouseButtonPressed)
            which_button_pressed(r);
    }
}
