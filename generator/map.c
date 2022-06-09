/*
** EPITECH PROJECT, 2022
** map
** File description:
** map
*/

#include "include/my.h"

char **malloc_array(vector2_t size, char base)
{
    char **map = malloc(sizeof(char *) * (size.y + 1));

    for (int i = 0; i < size.y; i++) {
        map[i] = malloc(sizeof(char) * (size.x + 1));
        for (int j = 0; j < size.x; j++)
            map[i][j] = base;
        map[i][size.x] = 0;
    }
    map[size.y] = NULL;
    return map;
}

void print_map(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != 0; j++)
            printf("%c", map[i][j]);
        if (map[i + 1] != NULL)
            printf("\n");
    }
}