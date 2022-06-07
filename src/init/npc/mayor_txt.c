/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mayor_txt
*/

#include "my_rpg.h"

void mayor_first_text(my_rpg_t *r)
{
    r->d[0].text = sfText_create();
    r->d[0].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[0].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[0].text, r->d[0].text_pos);
    sfText_setColor(r->d[0].text, sfWhite);
    sfText_setFont(r->d[0].text, r->d[0].font);
    sfText_setCharacterSize(r->d[0].text, 27);
    char *mayor = read_file("text_config/mayor.txt");
    sfText_setString(r->d[0].text, mayor);
}

void mayor_in_mission(my_rpg_t *r)
{
    r->d[1].text = sfText_create();
    r->d[1].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[1].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[1].text, r->d[1].text_pos);
    sfText_setColor(r->d[1].text, sfWhite);
    sfText_setFont(r->d[1].text, r->d[1].font);
    sfText_setCharacterSize(r->d[1].text, 27);
    char *skip = read_file("text_config/mayor1.txt");
    sfText_setString(r->d[1].text, skip);
}

void mayor_second_text(my_rpg_t *r)
{
    r->d[7].text = sfText_create();
    r->d[7].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[7].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[7].text, r->d[7].text_pos);
    sfText_setColor(r->d[7].text, sfWhite);
    sfText_setFont(r->d[7].text, r->d[7].font);
    sfText_setCharacterSize(r->d[7].text, 27);
    char *mayor = read_file("text_config/mayor2.txt");
    sfText_setString(r->d[7].text, mayor);
}
