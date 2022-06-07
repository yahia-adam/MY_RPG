/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** baby_txt
*/

#include "my_rpg.h"

void baby_first_text(my_rpg_t *r)
{
    r->d[4].text = sfText_create();
    r->d[4].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[4].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[4].text, r->d[4].text_pos);
    sfText_setColor(r->d[4].text, sfWhite);
    sfText_setFont(r->d[4].text, r->d[4].font);
    sfText_setCharacterSize(r->d[4].text, 27);
    char *mayor = read_file("text_config/baby.txt");
    sfText_setString(r->d[4].text, mayor);
}

void baby_in_mission(my_rpg_t *r)
{
    r->d[5].text = sfText_create();
    r->d[5].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[5].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[5].text, r->d[5].text_pos);
    sfText_setColor(r->d[5].text, sfWhite);
    sfText_setFont(r->d[5].text, r->d[5].font);
    sfText_setCharacterSize(r->d[5].text, 27);
    char *skip = read_file("text_config/baby1.txt");
    sfText_setString(r->d[5].text, skip);
}
