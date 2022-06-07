/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_map
*/

#include "my_rpg.h"
#include "map.h"
#include "macro.h"
#include "my.h"

void display_layer(my_rpg_t *rpg, int i, int j, int nbr_map)
{
    if (rpg->map.layer[nbr_map][i][j] != -1) {
        getrect_map(rpg->map.layer[nbr_map][i][j], &rpg->map);
        sfSprite_setPosition
(rpg->map.map_sprite, (sfVector2f) {j * TAILES_SIZE * 2, i * TAILES_SIZE * 2});
        sfRenderWindow_drawSprite(rpg->m.window, rpg->map.map_sprite, NULL);
    }
}

void display_map(my_rpg_t *rpg)
{
    for (int i = 0; i != MAP_LINE; i++)
        for (int j = 0; j != MAP_COL; j++) {
            display_layer(rpg, i, j, 0);
            display_layer(rpg, i, j, 1);
            display_layer(rpg, i, j, 2);
        }
}
