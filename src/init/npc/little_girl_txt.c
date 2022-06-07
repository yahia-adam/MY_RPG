/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** little_girl
*/

#include "my_rpg.h"

void girl_first_text(my_rpg_t *r)
{
    r->d[8].text = sfText_create();
    r->d[8].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[8].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[8].text, r->d[8].text_pos);
    sfText_setColor(r->d[8].text, sfWhite);
    sfText_setFont(r->d[8].text, r->d[8].font);
    sfText_setCharacterSize(r->d[8].text, 27);
    char *mayor = read_file("text_config/girl.txt");
    sfText_setString(r->d[8].text, mayor);
}

void girl_in_mission(my_rpg_t *r)
{
    r->d[9].text = sfText_create();
    r->d[9].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[9].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[9].text, r->d[9].text_pos);
    sfText_setColor(r->d[9].text, sfWhite);
    sfText_setFont(r->d[9].text, r->d[9].font);
    sfText_setCharacterSize(r->d[9].text, 27);
    char *skip = read_file("text_config/girl1.txt");
    sfText_setString(r->d[9].text, skip);
}

void girl_mission_finished(my_rpg_t *r)
{
    r->d[10].text = sfText_create();
    r->d[10].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[10].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[10].text, r->d[10].text_pos);
    sfText_setColor(r->d[10].text, sfWhite);
    sfText_setFont(r->d[10].text, r->d[10].font);
    sfText_setCharacterSize(r->d[10].text, 27);
    char *skip = read_file("text_config/girl2.txt");
    sfText_setString(r->d[10].text, skip);
}
