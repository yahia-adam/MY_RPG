/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** colision
*/

#include "my_rpg.h"
#include "map.h"
#include <stdio.h>
#include "macro.h"

bool colision(my_rpg_t *r, char c)
{
    if (r->s.state == 3) {
        if (c == 'r')
            return (right(r));
        if (c == 'l')
            return (left(r));
        if (c == 'u')
            return (up(r));
        if (c == 'd')
            return (down(r));
    } else
        return true;
    return (false);
}
