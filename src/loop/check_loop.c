/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** check_loop
*/

#include "my_rpg.h"
#include "my_menu.h"

void destroy_all(my_rpg_t *r)
{
    for (int i = 0; i < 3; i++)
        sfText_destroy(r->text[i].text);
    sfSprite_destroy(r->back[0].sprite);
}

void quit_game(my_rpg_t *r)
{
    sfRenderWindow_close(r->m.window);
    destroy_all(r);
}

void check_loop(my_rpg_t *r)
{
    void(*function[10])(my_rpg_t *r) = {&menu_loop, &option_loop, &quit_game,
    &game_loop, &pause_loop, &house_zero, &house_one, &house_two, &house_tree,
    &house_four};

    function[r->s.state](r);
}
