/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** ennemy_interaction
*/

#include "my_rpg.h"
#include "ennemy.h"

sfVector2f start_point(float a, float b)
{
    sfVector2f point;
    point.y = b;
    point.x = a;
    return point;
}

void is_attack_or_walk(my_rpg_t *r, int distance, int i)
{
    if (distance < 220) {
        r->p.ply_hp--;
        animation_attack(r, i);
    } else {
        animation_walk(r, i);
    }
}

void ennemy_interaction(my_rpg_t *r)
{
    sfVector2f pos;
    float elapsed = sfTime_asSeconds
    (sfClock_restart(r->ennemy.clock.ply_clock));
    int distance = 0;

    for (int i = 0; i != 3; i++) {
        if (r->ennemy.ennemy[i].state == true) {
            if ((distance = calc_distance
            (r->ennemy.ennemy[i].ennemy.sprite, r->p.rect_play)) < 700) {
                pos = sfRectangleShape_getPosition(r->p.rect_play);
                pos.x = sfSprite_getPosition
                (r->ennemy.ennemy[i].ennemy.sprite).x - pos.x + 170;
                pos.y = sfSprite_getPosition
                (r->ennemy.ennemy[i].ennemy.sprite).y - pos.y + 100;
                sfSprite_move(r->ennemy.ennemy[i].ennemy.sprite
                , start_point(3 * (-elapsed * pos.x), 3 * (-elapsed * pos.y)));
                is_attack_or_walk(r, distance, i);
            }
        }
    }
}
