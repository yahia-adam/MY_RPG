/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_house
*/

#include "map.h"
#include "my_rpg.h"
#include "macro.h"
#include "my.h"
#include <stdlib.h>

int **char_arr_to_int_arr(char **arr)
{
    char **arr_line;
    int **layer;

    layer = malloc(sizeof(int *) * (HOUSE_LINE + 1));
    for (int i = 0; i != HOUSE_LINE; ++i) {
        layer[i] = malloc(sizeof(int) * HOUSE_COL);
        arr_line = my_str_to_word_arr(arr[i], ",");
        for (int j = 0; arr_line[j] != NULL; j++)
            layer[i][j] = my_getnbr(arr_line[j]);
    }
    layer[HOUSE_LINE] = NULL;
    return (layer);
}

house_t init_house(void)
{
    house_t h;
    char *layer_path = my_strdup("assets/map_assets/house/house0_0.csv");

    h.rect.top = 0;
    h.rect.left = 0;
    h.rect.width = TAILES_SIZE;
    h.rect.height = TAILES_SIZE;
    h.sprite = sfSprite_create();
    h.texture = sfTexture_createFromFile
    ("assets/map_assets/house/house.png", NULL);
    sfSprite_setTexture(h.sprite, h.texture, sfTrue);
    sfSprite_scale(h.sprite, (sfVector2f) {2, 2});
    for (int i = 0; i != NBR_HOUSE; ++i) {
        layer_path[29] = i + '0';
        for (int j = 0; j != NBR_LAYER ; ++j) {
            layer_path[31] = j + '0';
            h.nbr_house[i].layer[j].nbr_layer = char_arr_to_int_arr
(my_str_to_word_arr(read_file(layer_path), "\n"));
        }
    }
    return (h);
}
