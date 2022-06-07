/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** music
*/

#include "my_rpg.h"

void music(my_rpg_t *r)
{
    r->mo[0].music = sfMusic_createFromFile("assets/main_music.ogg");
    sfMusic_setLoop(r->mo[0].music, true);
    sfMusic_play(r->mo[0].music);
}
