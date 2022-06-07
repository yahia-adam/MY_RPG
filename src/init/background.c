/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** background
*/

#include "my_rpg.h"
#include "my_menu.h"

void init_background(my_rpg_t *rpg)
{
    rpg->back[0].sprite = sfSprite_create();
    rpg->back[0].tex = sfTexture_createFromFile(
    "assets/menu_assets/background.jpg", NULL);
    sfSprite_setTexture(rpg->back[0].sprite, rpg->back[0].tex, sfFalse);
}

void draw_background(my_rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->m.window, rpg->back[0].sprite, NULL);
}
