/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_putstr
*/

#include <stddef.h>
#include <unistd.h>

void my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL) {
        my_putstr("NULL\n");
        return;
    }
    for (i = 0; str[i] != '\0'; i++);
    write(STDOUT_FILENO, str, i);
}
