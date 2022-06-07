/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** menu_text
*/

#include "my_rpg.h"
#include "my_menu.h"

void init_start_text(my_rpg_t *r)
{
    r->text[0].text = sfText_create();
    r->text[0].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->text[0].text_pos = (sfVector2f) {1500, 600};
    sfText_setPosition(r->text[0].text, r->text[0].text_pos);
    sfText_setColor(r->text[0].text, sfWhite);
    sfText_setFont(r->text[0].text, r->text[0].font);
    sfText_setCharacterSize(r->text[0].text, 35);
    char *start = "START";
    sfText_setString(r->text[0].text, start);
}

void init_option_text(my_rpg_t *r)
{
    r->text[1].text = sfText_create();
    r->text[1].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->text[1].text_pos = (sfVector2f) {1500, 700};
    sfText_setPosition(r->text[1].text, r->text[1].text_pos);
    sfText_setColor(r->text[1].text, sfWhite);
    sfText_setFont(r->text[1].text, r->text[1].font);
    sfText_setCharacterSize(r->text[1].text, 35);
    char *option = "OPTION";
    sfText_setString(r->text[1].text, option);
}

void init_exit_text(my_rpg_t *r)
{
    r->text[2].text = sfText_create();
    r->text[2].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->text[2].text_pos = (sfVector2f) {1500, 800};
    sfText_setPosition(r->text[2].text, r->text[2].text_pos);
    sfText_setColor(r->text[2].text, sfWhite);
    sfText_setFont(r->text[2].text, r->text[2].font);
    sfText_setCharacterSize(r->text[2].text, 35);
    char *exit = "EXIT";
    sfText_setString(r->text[2].text, exit);
}

void init_tile_text(my_rpg_t *r)
{
    r->text[3].text = sfText_create();
    r->text[3].font = sfFont_createFromFile("assets/font/Pixeled.ttf");
    r->text[3].text_pos = (sfVector2f) {500, 200};
    sfText_setPosition(r->text[3].text, r->text[3].text_pos);
    sfText_setColor(r->text[3].text, sfWhite);
    sfText_setFont(r->text[3].text, r->text[3].font);
    sfText_setCharacterSize(r->text[3].text, 150);
    char *exit = "MY RPG";
    sfText_setString(r->text[3].text, exit);
}

void init_menu_text(my_rpg_t *rpg)
{
    init_start_text(rpg);
    init_option_text(rpg);
    init_exit_text(rpg);
    init_tile_text(rpg);
}
