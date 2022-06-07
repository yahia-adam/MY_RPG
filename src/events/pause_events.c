/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** pause_events
*/

#include "my_rpg.h"
#include "macro.h"

static void check_pause_state(my_rpg_t *r, int i)
{
    if (i == 1)
        r->s.state = GAME;
    if (i == 2) {
        r->s.state = HOME;
        reset_all(r);
    }
}

static void which_pause_button_pressed(my_rpg_t *r)
{
    int i = 1;
    for (; i < 3; i++) {
        if (r->m.event.mouseButton.x >= r->pause[i].text_pos.x &&
        r->m.event.mouseButton.x <= r->pause[i].text_pos.x + 200 &&
        r->m.event.mouseButton.y >= r->pause[i].text_pos.y &&
        r->m.event.mouseButton.y <= r->pause[i].text_pos.y + 50) {
            r->s.state = i;
            check_pause_state(r, i);
        }
    }
}

static void check_which_button_pause(my_rpg_t *r)
{
    for (int i = 1; i < 3; i++)
        if (r->m.event.mouseMove.x >= r->pause[i].text_pos.x &&
        r->m.event.mouseMove.x <= r->pause[i].text_pos.x + 200 &&
        r->m.event.mouseMove.y >= r->pause[i].text_pos.y &&
        r->m.event.mouseMove.y <= r->pause[i].text_pos.y + 50)
            sfText_setCharacterSize(r->pause[i].text, 40);
        else {
            sfRenderWindow_clear(r->m.window, sfTransparent);
            sfText_setCharacterSize(r->pause[i].text, 35);
        }
}

void pause_events(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    while (sfRenderWindow_pollEvent(r->m.window, &r->m.event)) {
        if (r->m.event.type == sfEvtClosed)
            sfRenderWindow_close(r->m.window);
        if (r->m.event.type == sfEvtMouseMoved)
            check_which_button_pause(r);
        if (r->m.event.type == sfEvtMouseButtonPressed)
            which_pause_button_pressed(r);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == 1)
            r->s.state = GAME;
    }
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}
