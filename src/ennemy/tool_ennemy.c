/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** tool_ennemy
*/

#include "my_rpg.h"
#include "ennemy.h"

sfSprite *create_sprite(char *filename)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile
    (filename, NULL);

    sfSprite_setTexture(sprite, texture, 0);
    return sprite;
}

sfIntRect init_rect(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return (rect);
}
