/*
** EPITECH PROJECT, 2022
** my_rbg
** File description:
** map
*/

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef _MAP_H
    #define _MAP_H

typedef struct my_rpg_s my_rpg_t;
typedef struct map_s map_t;
typedef struct house_s house_t;

bool colision(my_rpg_t *r, char c);
void getrect_map(int nbr, map_t *map);
void display_map(my_rpg_t *rpg);
void display_layer(my_rpg_t *rpg, int i, int j, int nbr_map);
void getrect_map(int nbr, map_t *map);
void fill_map(map_t *map, int count, char **map_arr);
void load_map(map_t *map);
char *read_file(char *filepath);
void display_map(my_rpg_t *rpg);
void move_sprite(sfIntRect *rect, int incrementaion, char c);
house_t init_house(void);
map_t init_map(void);
void getrect_map(int nbr, map_t *map);
void display_house(my_rpg_t *rpg, int nbr_house);
void check_house(my_rpg_t *r);
bool right_house(my_rpg_t *r);
bool left_house(my_rpg_t *r);
bool up_house(my_rpg_t *r);
bool down_house(my_rpg_t *r);
bool up(my_rpg_t *r);
bool down(my_rpg_t *r);
bool right(my_rpg_t *r);
bool left(my_rpg_t *r);

#endif/* !_MAP_H */
