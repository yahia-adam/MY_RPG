/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_all_npc
*/

#include "my_rpg.h"

void init_npc_text(my_rpg_t *r)
{
    mayor_first_text(r);
    mayor_in_mission(r);
    mayor_second_text(r);
    mother_first_text(r);
    mother_in_mission(r);
    baby_first_text(r);
    baby_in_mission(r);
    mother_mission_finished(r);
    girl_first_text(r);
    girl_in_mission(r);
    girl_mission_finished(r);
    dog_first_text(r);
    dog_mission_finished(r);
}
