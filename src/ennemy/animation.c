/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** animation
*/

#include "my_rpg.h"
#include "ennemy.h"

void animation_walk(my_rpg_t *r, int nbr_ennemy)
{
    sfClock_restart(r->ennemy.clock.ply_clock);
    r->ennemy.ennemy[nbr_ennemy].ennemy.rect = animation_sprit_ennemy
    (0, r->ennemy.ennemy[nbr_ennemy].walk, r->ennemy.ennemy[nbr_ennemy].
    ennemy.rect, r->ennemy.ennemy[nbr_ennemy].ennemy.len);
    sfSprite_setTextureRect(r->ennemy.ennemy[nbr_ennemy].ennemy.sprite
    ,r->ennemy.ennemy[nbr_ennemy].ennemy.rect);
}

void animation_deth(my_rpg_t *r, int nbr_ennemy)
{
    sfClock_restart(r->ennemy.clock.ply_clock);
    r->ennemy.ennemy[nbr_ennemy].ennemy.rect = animation_sprit_ennemy
    (2, r->ennemy.ennemy[nbr_ennemy].deth, r->ennemy.ennemy[nbr_ennemy].
    ennemy.rect, r->ennemy.ennemy[nbr_ennemy].ennemy.len);
    sfSprite_setTextureRect(r->ennemy.ennemy[nbr_ennemy].ennemy.sprite
    ,r->ennemy.ennemy[nbr_ennemy].ennemy.rect);
}

void animation_attack(my_rpg_t *r, int nbr_ennemy)
{
    sfClock_restart(r->ennemy.clock.ply_clock);
    r->ennemy.ennemy[nbr_ennemy].ennemy.rect = animation_sprit_ennemy
    (1, r->ennemy.ennemy[nbr_ennemy].attack, r->ennemy.ennemy[nbr_ennemy].
    ennemy.rect, r->ennemy.ennemy[nbr_ennemy].ennemy.len);
    sfSprite_setTextureRect(r->ennemy.ennemy[nbr_ennemy].ennemy.sprite
    ,r->ennemy.ennemy[nbr_ennemy].ennemy.rect);
}

void ennemy_animation(my_rpg_t *r)
{
    r->ennemy.clock.ply_time
    = sfClock_getElapsedTime(r->ennemy.clock.ply_clock);
    r->ennemy.clock.ply_sec
    = r->ennemy.clock.ply_time.microseconds / 1000000.0;
    if (r->ennemy.clock.ply_sec > 0.1) {
        ennemy_interaction(r);
    }
    sfRenderWindow_drawSprite(r->m.window, r->ennemy.ennemy[1].ennemy.sprite,
    sfFalse);
    sfRenderWindow_drawSprite(r->m.window, r->ennemy.ennemy[2].ennemy.sprite,
    sfFalse);
    sfRenderWindow_drawSprite(r->m.window, r->ennemy.ennemy[0].ennemy.sprite,
    sfFalse);
}
