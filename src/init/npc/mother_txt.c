/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** lostwomen
*/

#include "my_rpg.h"

void mother_first_text(my_rpg_t *r)
{
    r->d[2].text = sfText_create();
    r->d[2].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[2].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[2].text, r->d[2].text_pos);
    sfText_setColor(r->d[2].text, sfWhite);
    sfText_setFont(r->d[2].text, r->d[2].font);
    sfText_setCharacterSize(r->d[2].text, 27);
    char *mayor = read_file("text_config/mother.txt");
    sfText_setString(r->d[2].text, mayor);
}

void mother_in_mission(my_rpg_t *r)
{
    r->d[3].text = sfText_create();
    r->d[3].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[3].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[3].text, r->d[3].text_pos);
    sfText_setColor(r->d[3].text, sfWhite);
    sfText_setFont(r->d[3].text, r->d[3].font);
    sfText_setCharacterSize(r->d[3].text, 27);
    char *skip = read_file("text_config/mother1.txt");
    sfText_setString(r->d[3].text, skip);
}

void mother_mission_finished(my_rpg_t *r)
{
    r->d[6].text = sfText_create();
    r->d[6].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[6].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[6].text, r->d[6].text_pos);
    sfText_setColor(r->d[6].text, sfWhite);
    sfText_setFont(r->d[6].text, r->d[6].font);
    sfText_setCharacterSize(r->d[6].text, 27);
    char *skip = read_file("text_config/mother2.txt");
    sfText_setString(r->d[6].text, skip);
}
