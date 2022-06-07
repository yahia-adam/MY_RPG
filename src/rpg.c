/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** rpg
*/

#include "my_rpg.h"
#include "my_menu.h"
#include "my_player.h"
#include "macro.h"
#include "map.h"
#include "ennemy.h"

my_rpg_t init_struct(void)
{
    my_rpg_t rpg;

    init_window(&rpg);
    init_background(&rpg);
    init_npc(&rpg);
    init_menu_text(&rpg);
    init_into_option_text(&rpg);
    init_player_struct(&rpg);
    init_player_texture(&rpg);
    init_pause_sprite(&rpg);
    init_pause_text(&rpg);
    init_all_arrow(&rpg);
    init_chatbox(&rpg);
    ongoing_quest(&rpg);
    interaction(&rpg);
    init_npc_text(&rpg);
    return rpg;
}

void my_rpg(void)
{
    my_rpg_t rpg = init_struct();

    rpg.map = init_map();
    rpg.houses = init_house();
    rpg.ennemy = init_ennemy();
    rpg.s.state = HOME;
    rpg.s.fps_state = FPS_30;
    rpg.s.player = 1;
    rpg.s.npc_state = 0;
    rpg.s.npc_perso = 0;
    rpg.s.npc_quest = 0;
    music(&rpg);
    sfRenderWindow_setFramerateLimit(rpg.m.window, 60);
    while (sfRenderWindow_isOpen(rpg.m.window))
        check_loop(&rpg);
    sfMusic_destroy(rpg.mo[0].music);
}
