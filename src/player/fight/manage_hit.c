/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-villon.zhang
** File description:
** damage
*/

#include <stdlib.h>
#include "my_rpg.h"
#include "my_player.h"
#include "ennemy.h"

static void randomize_damage(my_rpg_t *r)
{
    r->c[3].ply_time = sfClock_getElapsedTime(r->c[3].ply_clock);
    r->c[3].ply_sec = r->c[3].ply_time.microseconds / 10000000.0;
    srand(r->c[3].ply_sec);
    r->p.damage = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_DAMAGE;
    if (r->c[3].ply_sec > r->c[3].ply_sec)
        sfClock_restart(r->c[3].ply_clock);
}

void manage_player_damage(my_rpg_t *r)
{
    float distance = 0;
    sfVector2f pos;

    randomize_damage(r);
    for (int i = 0; i != 3; i++) {
        if (r->ennemy.ennemy[i].state == true) {
            pos = sfSprite_getScale(r->ennemy.ennemy[i].ennemy.sprite);
            pos.x -= 0.0001;
            pos.y -= 0.0001;
            distance = calc_distance
            (r->ennemy.ennemy[i].ennemy.sprite, r->p.rect_play);
            if (distance < 220) {
                r->ennemy.ennemy[i].hp -= r->p.damage;
                sfSprite_setScale(r->ennemy.ennemy[i].ennemy.sprite, pos);
            }
            if (r->ennemy.ennemy[i].hp <= 0) {
                animation_deth(r, i);
                r->ennemy.ennemy[i].state = false;
            }
        }
    }
}
