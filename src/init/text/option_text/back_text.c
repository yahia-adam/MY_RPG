/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** back_text
*/

#include "my_rpg.h"

void init_back_text(my_rpg_t *r)
{
    r->opt[4].text = sfText_create();
    r->opt[4].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->opt[4].text_pos = (sfVector2f) {100, 900};
    sfText_setPosition(r->opt[4].text, r->opt[4].text_pos);
    sfText_setColor(r->opt[4].text, sfWhite);
    sfText_setFont(r->opt[4].text, r->opt[4].font);
    sfText_setCharacterSize(r->opt[4].text, 30);
    char *back = "BACK";
    sfText_setString(r->opt[4].text, back);
}
