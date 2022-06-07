/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** pause_text
*/

#include "my_rpg.h"

void init_giant_pause_text(my_rpg_t *r)
{
    r->pause[0].text = sfText_create();
    r->pause[0].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->pause[0].text_pos = (sfVector2f) {825, 180};
    sfText_setPosition(r->pause[0].text, r->pause[0].text_pos);
    sfText_setColor(r->pause[0].text, sfWhite);
    sfText_setFont(r->pause[0].text, r->pause[0].font);
    sfText_setCharacterSize(r->pause[0].text, 60);
    char *pause = "PAUSE";
    sfText_setString(r->pause[0].text, pause);
}

void init_back_pause_text(my_rpg_t *r)
{
    r->pause[1].text = sfText_create();
    r->pause[1].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->pause[1].text_pos = (sfVector2f) {860, 400};
    sfText_setPosition(r->pause[1].text, r->pause[1].text_pos);
    sfText_setColor(r->pause[1].text, sfWhite);
    sfText_setFont(r->pause[1].text, r->pause[1].font);
    sfText_setCharacterSize(r->pause[1].text, 35);
    char *resume = "RESUME";
    sfText_setString(r->pause[1].text, resume);
}

void init_home_text(my_rpg_t *r)
{
    r->pause[2].text = sfText_create();
    r->pause[2].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->pause[2].text_pos = (sfVector2f) {890, 500};
    sfText_setPosition(r->pause[2].text, r->pause[2].text_pos);
    sfText_setColor(r->pause[2].text, sfWhite);
    sfText_setFont(r->pause[2].text, r->pause[2].font);
    sfText_setCharacterSize(r->pause[2].text, 35);
    char *home = "HOME";
    sfText_setString(r->pause[2].text, home);
}

void init_pause_text(my_rpg_t *r)
{
    init_giant_pause_text(r);
    init_back_pause_text(r);
    init_home_text(r);
}
