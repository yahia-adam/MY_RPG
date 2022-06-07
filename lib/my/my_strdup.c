/*
** EPITECH PROJECT, 2021
** emas
** File description:
** emacs
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int len_str = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len_str + 1));
    int i = 0;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
