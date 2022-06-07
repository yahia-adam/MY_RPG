/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** option_events
*/

#include <stdio.h>
#include "my_rpg.h"
#include "my_menu.h"
#include "macro.h"

void go_back(my_rpg_t *r, int i)
{
    if (i == 4)
        r->s.state = HOME;
    return;
}

void choose_fps(my_rpg_t *r)
{
    if (r->s.fps_state == FPS_30)
        sfRenderWindow_setFramerateLimit(r->m.window, 30);
    if (r->s.fps_state == FPS_60)
        sfRenderWindow_setFramerateLimit(r->m.window, 60);
    if (r->s.fps_state == FPS_120)
        sfRenderWindow_setFramerateLimit(r->m.window, 120);
}

void which_option_button_pressed(my_rpg_t *r)
{
    int i = 0;
    for (; i < 2; i++) {
        if (r->m.event.mouseButton.x >= r->ch[i].arrow_pos.x &&
        r->m.event.mouseButton.x <= r->ch[i].arrow_pos.x + 120 &&
        r->m.event.mouseButton.y >= r->ch[i].arrow_pos.y &&
        r->m.event.mouseButton.y <= r->ch[i].arrow_pos.y + 120)
            which_player_chosed(r, i);
    }
    for (; i < 5; i++) {
        if (r->m.event.mouseButton.x >= r->opt[i].text_pos.x &&
        r->m.event.mouseButton.x <= r->opt[i].text_pos.x + 70 &&
        r->m.event.mouseButton.y >= r->opt[i].text_pos.y &&
        r->m.event.mouseButton.y <= r->opt[i].text_pos.y + 50) {
            r->s.fps_state = i;
            go_back(r, i);
        }
    }
    choose_fps(r);
}

void check_which_button_option(my_rpg_t *r)
{
    for (int i = 1; i < 5; i++)
        if (r->m.event.mouseMove.x >= r->opt[i].text_pos.x &&
        r->m.event.mouseMove.x <= r->opt[i].text_pos.x + 70 &&
        r->m.event.mouseMove.y >= r->opt[i].text_pos.y &&
        r->m.event.mouseMove.y <= r->opt[i].text_pos.y + 50)
            sfText_setCharacterSize(r->opt[i].text, 35);
        else
            sfText_setCharacterSize(r->opt[i].text, 30);
}

void option_events(my_rpg_t *r)
{
    while (sfRenderWindow_pollEvent(r->m.window, &r->m.event)) {
        if (r->m.event.type == sfEvtClosed)
            sfRenderWindow_close(r->m.window);
        if (r->m.event.type == sfEvtMouseMoved)
            check_which_button_option(r);
        if (r->m.event.type == sfEvtMouseButtonPressed)
            which_option_button_pressed(r);
    }
}
