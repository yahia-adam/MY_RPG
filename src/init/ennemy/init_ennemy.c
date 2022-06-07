/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_ennemy
*/

#include "my_rpg.h"
#include "ennemy.h"

ennemy_t init_jin_ennemy(ennemy_t em)
{
    em.ennemy[2].ennemy.sprite =
    create_sprite("assets/ennemy_assets/jin.png");
    em.ennemy[2].hp = 1000;
    em.ennemy[2].damage = 0.5;
    em.ennemy[2].state = true;
    em.ennemy[2].ennemy.len = 128;
    em.ennemy[2].deth = em.ennemy[2].ennemy.len * 6;
    em.ennemy[2].attack = em.ennemy[2].ennemy.len * 3;
    em.ennemy[2].walk = em.ennemy[2].ennemy.len * 3;
    em.ennemy[2].ennemy.rect = init_rect(0, 0, 128, 128);
    sfSprite_setTextureRect
    (em.ennemy[2].ennemy.sprite ,em.ennemy[2].ennemy.rect);
    sfSprite_setPosition
    (em.ennemy[2].ennemy.sprite, (sfVector2f) {5590, 8050});
    return (em);
}

ennemy_t init_demon_ennemy(ennemy_t em)
{
    em.ennemy[1].ennemy.sprite =
    create_sprite("assets/ennemy_assets/demon.png");
    em.ennemy[1].ennemy.len = 256;
    em.ennemy[1].damage = 5;
    em.ennemy[1].hp = 230;
    em.ennemy[1].state = true;
    em.ennemy[1].attack = em.ennemy[1].ennemy.len * 3;
    em.ennemy[1].deth = em.ennemy[1].ennemy.len * 5;
    em.ennemy[1].walk = em.ennemy[1].ennemy.len * 4;
    em.ennemy[1].ennemy.rect = init_rect(0, 0, 256, 256);
    sfSprite_setTextureRect
    (em.ennemy[1].ennemy.sprite ,em.ennemy[1].ennemy.rect);
    sfSprite_setPosition(em.ennemy[1].ennemy.sprite
    , (sfVector2f) {3144, 1270});
    em = init_jin_ennemy(em);
    return (em);
}

sfIntRect animation_sprit_ennemy(int state, int max, sfIntRect rect, int add)
{
    rect.left += add;
    rect.top = state * add;
    if (rect.left > max)
        rect.left = 0;
    return rect;
}

ennemy_t init_ennemy(void)
{
    ennemy_t em;

    em.clock.ply_clock = sfClock_create();
    em.clock.ply_sec = 0;
    em.ennemy[0].ennemy.sprite =
    create_sprite("assets/ennemy_assets/dragon.png");
    em.ennemy[0].damage = 6;
    em.ennemy[0].state = true;
    em.ennemy[0].ennemy.len = 256;
    em.ennemy[0].hp = 150;
    em.ennemy[0].attack = em.ennemy[0].ennemy.len * 7;
    em.ennemy[0].deth = em.ennemy[0].ennemy.len * 5;
    em.ennemy[0].walk = em.ennemy[0].ennemy.len * 4;
    em.ennemy[0].ennemy.rect = init_rect(0, 0, 256, 256);
    sfSprite_setTextureRect
    (em.ennemy[0].ennemy.sprite ,em.ennemy[0].ennemy.rect);
    sfSprite_setPosition
    (em.ennemy[0].ennemy.sprite, (sfVector2f) {2400, 7650});
    em = init_demon_ennemy(em);
    return (em);
}
