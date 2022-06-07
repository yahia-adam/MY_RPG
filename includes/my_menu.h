/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** menu
*/

#ifndef MENU_H_
    #define MENU_H_

struct my_rpg_t;

void menu_loop(my_rpg_t *r);
void check_loop(my_rpg_t *r);
void menu_events(my_rpg_t *r);
void init_background(my_rpg_t *rpg);
void init_start_text(my_rpg_t *r);
void init_option_text(my_rpg_t *r);
void init_menu_text(my_rpg_t *rpg);
void draw_background(my_rpg_t *rpg);
void option_loop(my_rpg_t *r);
void option_events(my_rpg_t *r);
void init_fps_text(my_rpg_t *r);
void init_into_option_text(my_rpg_t *r);
void check_which_button(my_rpg_t *r);
void game_loop(my_rpg_t *r);

#endif /* !MENU_H_ */
