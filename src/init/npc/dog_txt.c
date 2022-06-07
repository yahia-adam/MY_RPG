/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dog
*/

#include "my_rpg.h"

void dog_first_text(my_rpg_t *r)
{
    r->d[11].text = sfText_create();
    r->d[11].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[11].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[11].text, r->d[11].text_pos);
    sfText_setColor(r->d[11].text, sfWhite);
    sfText_setFont(r->d[11].text, r->d[11].font);
    sfText_setCharacterSize(r->d[11].text, 27);
    char *mayor = read_file("text_config/dog.txt");
    sfText_setString(r->d[11].text, mayor);
}

void dog_mission_finished(my_rpg_t *r)
{
    r->d[12].text = sfText_create();
    r->d[12].font = sfFont_createFromFile("assets/font/zeub.ttf");
    r->d[12].text_pos = (sfVector2f) {r->cb[0].cb_pos.x + 50,
    r->cb[0].cb_pos.y + 30};
    sfText_setPosition(r->d[12].text, r->d[12].text_pos);
    sfText_setColor(r->d[12].text, sfWhite);
    sfText_setFont(r->d[12].text, r->d[12].font);
    sfText_setCharacterSize(r->d[12].text, 27);
    char *skip = read_file("text_config/dog1.txt");
    sfText_setString(r->d[12].text, skip);
}
