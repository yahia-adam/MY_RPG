/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** distance
*/

#include "my_rpg.h"
#include <math.h>

float calc_distance(sfSprite *sprite1, sfRectangleShape *sprite2)
{
    float distance = 0;
    float deferent_y = 0;
    float deferent_x = 0;
    sfVector2f P_sprite1 = sfSprite_getPosition(sprite1);
    sfVector2f P_sprite2 = sfRectangleShape_getPosition(sprite2);

    deferent_x = P_sprite1.x - P_sprite2.x;
    deferent_y = P_sprite1.y - P_sprite2.y;
    distance = deferent_x * deferent_x + deferent_y * deferent_y;
    distance = sqrt(distance);
    return (distance);
}
