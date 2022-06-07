/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** chatbox
*/

#include "my_rpg.h"

void init_chatbox(my_rpg_t *r)
{
    r->cb[0].chat_box = sfRectangleShape_create();
    r->cb[0].cb_size = (sfVector2f) {1926, 250};
    r->cb[0].cb_pos = (sfVector2f) {-2, 760};
    r->cb[0].txt_cb =
    sfTexture_createFromFile("assets/game_assets/chat_box.png", NULL);
    sfRectangleShape_setSize(r->cb[0].chat_box, r->cb[0].cb_size);
    sfRectangleShape_setPosition(r->cb[0].chat_box, r->cb[0].cb_pos);
    sfRectangleShape_setTexture(r->cb[0].chat_box, r->cb[0].txt_cb, 0);
}

void ongoing_quest(my_rpg_t *r)
{
    r->cb[1].chat_box = sfRectangleShape_create();
    r->cb[1].cb_size = (sfVector2f) {318, 78};
    r->cb[1].cb_pos = (sfVector2f) {0, 0};
    r->cb[1].txt_cb =
    sfTexture_createFromFile("assets/game_assets/chat_box.png", NULL);
    sfRectangleShape_setSize(r->cb[1].chat_box, r->cb[1].cb_size);
    sfRectangleShape_setPosition(r->cb[1].chat_box, r->cb[1].cb_pos);
    sfRectangleShape_setTexture(r->cb[1].chat_box, r->cb[1].txt_cb, 0);
}

void display_box(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    sfRenderWindow_drawRectangleShape(r->m.window, r->cb[0].chat_box, NULL);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}

void quest_box(my_rpg_t *r)
{
    sfRenderWindow_setView(r->m.window, r->cam[0].cam);
    sfRenderWindow_drawRectangleShape(r->m.window, r->cb[1].chat_box, NULL);
    sfRenderWindow_setView(r->m.window, r->cam[1].cam);
}
