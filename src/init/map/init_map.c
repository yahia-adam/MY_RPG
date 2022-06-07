/*
** EPITECH PROJECT, 2022
** my_rbg
** File description:
** init_map
*/

#include <stdio.h>
#include <stdlib.h>
#include "my_rpg.h"
#include "macro.h"
#include "proto.h"
#include "map.h"
#include "my.h"

void fill_map(map_t *map, int count, char **map_arr)
{
    int i = 0;
    char **arr_line;

    for (i = 0; map_arr[i] != NULL; i++) {
        arr_line = my_str_to_word_arr(map_arr[i], ",");
        for (int j = 0; arr_line[j] != NULL; j++)
            map->layer[count][i][j] = my_getnbr(arr_line[j]);
    }
}

void load_map(map_t *map)
{
    char **map_arr;
    char *layer_path = my_strdup("assets/map_assets/map_0.csv");

    map->layer = malloc(sizeof(int **) * (NBR_LAYER + 1));
    map->layer[NBR_LAYER] = NULL;
    for (int i = 0; i != NBR_LAYER; i++) {
        map->layer[i] = malloc(sizeof(int *) * (MAP_LINE + 1));
        for (int j = 0; j != MAP_COL; j++)
            map->layer[i][j] = malloc(sizeof(int) * MAP_COL);
        map->layer[i][MAP_LINE] = NULL;
        layer_path[LEN_LAYER_NAME] = i + '0';
        map_arr = my_str_to_word_arr(read_file(layer_path), "\n");
        fill_map(map, i, map_arr);
    }
}

void getrect_map(int nbr, map_t *map)
{
    map->rect_map.top = (nbr / HIGHT_SPRTE_MAP) * TAILES_SIZE;
    map->rect_map.left = (nbr % HIGHT_SPRTE_MAP) * TAILES_SIZE;
    sfSprite_setTextureRect(map->map_sprite, map->rect_map);
}

map_t init_map(void)
{
    map_t map;

    map.rect_map.top = 0;
    map.rect_map.left = 0;
    map.rect_map.width = TAILES_SIZE;
    map.rect_map.height = TAILES_SIZE;
    map.map_sprite = sfSprite_create();
    map.map_texture = sfTexture_createFromFile
    ("assets/map_assets/map.png", NULL);
    sfSprite_setTexture(map.map_sprite, map.map_texture, sfTrue);
    sfSprite_scale(map.map_sprite, (sfVector2f) {2, 2});
    load_map(&map);
    return (map);
}
