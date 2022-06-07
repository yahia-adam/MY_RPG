/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_house
*/

#include "my_rpg.h"
#include "map.h"
#include "macro.h"
#include "my.h"

void getrect_house(int nbr, house_t *h)
{
    h->rect.top = (nbr / HIGHT_SPRTE_HOUSE) * TAILES_SIZE;
    h->rect.left = (nbr % HIGHT_SPRTE_HOUSE) * TAILES_SIZE;
    sfSprite_setTextureRect(h->sprite, h->rect);
}

void display_layer_house(my_rpg_t *rpg, int nbr_layer, int i, int j)
{
    if (rpg->houses.nbr_house[rpg->houses.nbr_house_display]
        .layer[nbr_layer].nbr_layer[i][j] != -1) {
        getrect_house(rpg->houses.nbr_house[rpg->houses.nbr_house_display]
        .layer[nbr_layer].nbr_layer[i][j], &rpg->houses);
        sfSprite_setPosition(rpg->houses.sprite
        , (sfVector2f) {j * TAILES_SIZE * 2, i * TAILES_SIZE * 2});
        sfRenderWindow_drawSprite(rpg->
        m.window, rpg->houses.sprite, NULL);
    }
}

void display_house(my_rpg_t *rpg, int nbr_house)
{
    rpg->houses.nbr_house_display = nbr_house;
    for (int i = 0; i != HOUSE_LINE; i++)
        for (int j = 0; j != HOUSE_COL; j++) {
            display_layer_house(rpg, 0, i, j);
            display_layer_house(rpg, 1, i, j);
            display_layer_house(rpg, 2, i, j);
        }
}
