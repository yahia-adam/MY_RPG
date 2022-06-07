/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** ennemy
*/

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef ENNEMY_H_
    #define ENNEMY_H_

void animation_deth(my_rpg_t *r, int nbr_ennemy);
sfIntRect init_rect(int top, int left, int width, int height);
sfSprite *create_sprite(char *filename);
sfIntRect animation_sprit_ennemy(int state, int max, sfIntRect rect, int add);
void ennemy_animation(my_rpg_t *r);
ennemy_t init_ennemy(void);
sfSprite *create_sprite(char *filename);
sfIntRect init_rect(int top, int left, int width, int height);
void ennemy_interaction(my_rpg_t *r);
float angle(sfSprite *sprite1, sfRectangleShape *sprite2);
float calc_distance(sfSprite *sprite1, sfRectangleShape *sprite2);
void animation_attack(my_rpg_t *r, int nbr_ennemy);
void animation_walk(my_rpg_t *r, int nbr_ennemy);

#endif/* !ENNEMY_H_ */
