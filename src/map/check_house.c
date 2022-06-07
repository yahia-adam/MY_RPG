/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** check_house
*/

#include "my_rpg.h"
#include "map.h"

void check_house_end(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);

    if (pos.x >= 7668 && pos.x <= 7716)
        if (pos.y >= 4176 && pos.y <= 4218) {
            r->p.ply_pos = (sfVector2f) {960, 528};
            r->s.state = 7;
        }
    if (pos.x >= 7284 && pos.x <= 7332)
        if (pos.y >= 2160 && pos.y <= 2214) {
            r->p.ply_pos = (sfVector2f) {960, 528};
            r->s.state = 8;
        }
    if (pos.x >= 1704 && pos.x <= 1764)
        if (pos.y >= 6192 && pos.y <= 6240) {
            r->p.ply_pos = (sfVector2f) {960, 528};
            r->s.state = 9;
        }
}

void check_house(my_rpg_t *r)
{
    sfVector2f pos = sfRectangleShape_getPosition(r->p.rect_play);

    if (pos.x >= 5460 && pos.x <= 5508)
        if (pos.y >= 3354 && pos.y <= 3570) {
            r->p.ply_pos = (sfVector2f) {960, 528};
            r->s.state = 5;
        }
    if (pos.x >= 5748 && pos.x <= 5796)
        if (pos.y >= 4848 && pos.y <= 4908) {
            r->p.ply_pos = (sfVector2f) {960, 528};
            r->s.state = 6;
        }
    check_house_end(r);
}
