/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** option_text
*/

#include "my_rpg.h"
#include "my_menu.h"

void init_fps_text(my_rpg_t *r)
{
    r->opt[0].text = sfText_create();
    r->opt[0].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->opt[0].text_pos = (sfVector2f) {1750, 100};
    sfText_setPosition(r->opt[0].text, r->opt[0].text_pos);
    sfText_setColor(r->opt[0].text, sfWhite);
    sfText_setFont(r->opt[0].text, r->opt[0].font);
    sfText_setCharacterSize(r->opt[0].text, 35);
    char *fps_text = "FPS";
    sfText_setString(r->opt[0].text, fps_text);
}

void init_fps_one(my_rpg_t *r)
{
    r->opt[1].text = sfText_create();
    r->opt[1].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->opt[1].text_pos = (sfVector2f) {1350, 200};
    sfText_setPosition(r->opt[1].text, r->opt[1].text_pos);
    sfText_setColor(r->opt[1].text, sfWhite);
    sfText_setFont(r->opt[1].text, r->opt[1].font);
    sfText_setCharacterSize(r->opt[1].text, 30);
    char *fps_one = "30";
    sfText_setString(r->opt[1].text, fps_one);
}

void init_fps_two(my_rpg_t *r)
{
    r->opt[2].text = sfText_create();
    r->opt[2].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->opt[2].text_pos = (sfVector2f) {1550, 200};
    sfText_setPosition(r->opt[2].text, r->opt[2].text_pos);
    sfText_setColor(r->opt[2].text, sfWhite);
    sfText_setFont(r->opt[2].text, r->opt[2].font);
    sfText_setCharacterSize(r->opt[2].text, 30);
    char *fps_two = "60";
    sfText_setString(r->opt[2].text, fps_two);
}

void init_fps_three(my_rpg_t *r)
{
    r->opt[3].text = sfText_create();
    r->opt[3].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->opt[3].text_pos = (sfVector2f) {1750, 200};
    sfText_setPosition(r->opt[3].text, r->opt[3].text_pos);
    sfText_setColor(r->opt[3].text, sfWhite);
    sfText_setFont(r->opt[3].text, r->opt[3].font);
    sfText_setCharacterSize(r->opt[3].text, 30);
    char *fps_three = "120";
    sfText_setString(r->opt[3].text, fps_three);
}

void init_into_option_text(my_rpg_t *r)
{
    init_fps_text(r);
    init_fps_one(r);
    init_fps_two(r);
    init_fps_three(r);
    init_back_text(r);
}
