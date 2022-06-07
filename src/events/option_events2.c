/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** option_events2
*/

#include "my_rpg.h"

void which_player_chosed(my_rpg_t *r, int clicked)
{
    if (clicked == 0)
        r->s.player -= 1;
    if (clicked == 1)
        r->s.player += 1;
    if (r->s.player < 0)
        r->s.player = 2;
    if (r->s.player > 2)
        r->s.player = 0;
}

char *check_which_player(my_rpg_t *r)
{
    char *first_player = "assets/player/mc.png";
    char *second_player = "assets/player/mc2.png";
    char *third_player = "assets/player/mc3.png";

    if (r->s.player == 1)
        return (first_player);
    if (r->s.player == 2)
        return (second_player);
    if (r->s.player == 0)
        return (third_player);
    return first_player;
}
