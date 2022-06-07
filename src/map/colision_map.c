/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** colision_map
*/

#include "my_rpg.h"
#include "map.h"
#include <stdio.h>
#include "macro.h"

bool right(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);
    int x_pos = pos.x;
    int y_pos = pos.y;
    int x = (pos.x + HALF_RECT) / (TAILES_SIZE * 2);
    int y = (pos.y + HALF_RECT) / (TAILES_SIZE * 2);
    int rest_x = (x_pos + HALF_RECT) % (TAILES_SIZE * 2);
    int rest_y = (y_pos + HALF_RECT) % (TAILES_SIZE * 2);
    rest_y = rest_y;

    if (rest_x > STEP_MOVE)
        return true;
    if (r->map.layer[0][y][x] != WATER_TAILE && r->map.layer[1][y][x] == -1
&& r->map.layer[2][y][x] == -1)
        return (true);
    return (false);
}

bool left(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);
    int x_pos = pos.x;
    int x = (pos.x - HALF_TILED_SIZE - 5) / (TAILES_SIZE * 2);
    int y = (pos.y + HALF_RECT) / (TAILES_SIZE * 2);
    int rest_x = (x_pos - HALF_TILED_SIZE - 5) % (TAILES_SIZE * 2);

    if (rest_x > 40)
        return true;
    if (r->map.layer[0][y][x] != WATER_TAILE && r->map.layer[1][y][x] == -1
&& r->map.layer[2][y][x] == -1)
        return (true);
    return (false);
}

bool up(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);
    int x_pos = pos.x;
    int y_pos = pos.y;
    int x = (pos.x - HALF_TILED_SIZE - 5) / (TAILES_SIZE * 2);
    int y = (pos.y - HALF_TILED_SIZE) / (TAILES_SIZE * 2);
    int rest_x = (x_pos - HALF_TILED_SIZE - 5) % (TAILES_SIZE * 2);
    int rest_y = (y_pos - HALF_TILED_SIZE) % (TAILES_SIZE * 2);
    rest_x = rest_x;

    if (rest_y > STEP_MOVE)
        return true;
    if (r->map.layer[0][y][x + 1] != WATER_TAILE &&
    r->map.layer[1][y][x + 1] == -1 && r->map.layer[2][y][x + 1] == -1)
        return (true);
    return (false);
}

bool down(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);
    int y_pos = pos.y;
    int x = (pos.x + HALF_RECT) / (TAILES_SIZE * 2);
    int y = (pos.y + HALF_RECT) / (TAILES_SIZE * 2);
    int rest_y = (y_pos + HALF_RECT) % (TAILES_SIZE * 2);

    if (rest_y > STEP_MOVE)
        return true;
    if (r->map.layer[0][y][x] != WATER_TAILE && r->map.layer[1][y][x] == -1
&& r->map.layer[2][y][x] == -1)
        return (true);
    return (false);
}
