/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** player
*/

#ifndef MY_PLAYER_H_
    #define MY_PLAYER_H_

    #define HRT_HEIGHT 36
    #define PLY_LEFT 85.6667
    #define TRUE 1
    #define FALSE 0
    #define DOWNWARD 324
    #define RIGHTWARD 405
    #define LEFTWARD 486
    #define UPWARD 567
    #define DOWN 1
    #define UP 2
    #define RIGHT 3
    #define LEFT 4
    #define SPT_DOWN 0
    #define SPT_RIGHT 81
    #define SPT_LEFT 162
    #define SPT_UP 243
    #define MAX_DAMAGE 25
    #define MIN_DAMAGE 17
    #define MAX_RAND_TIME 1500000

struct my_rpg_t;

void init_player_struct(my_rpg_t *rpg);
void player_movement_clock(my_rpg_t *rpg);
void which_key_released(my_rpg_t *r);
void which_key_pressed(my_rpg_t *r);
void player_movement(my_rpg_t *r);
void manage_hud(my_rpg_t *r);
void game_events(my_rpg_t *r);
void manage_fight(my_rpg_t *r);
void manage_player_damage(my_rpg_t *r);

#endif /* !MY_PLAYER_H_ */
