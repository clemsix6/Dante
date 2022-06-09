/*
** EPITECH PROJECT, 2022
** generator
** File description:
** generator
*/

#include "include/my.h"

void row(char **map, int y, vector2_t size)
{
    int rand_case = rand() % size.x;

    for (int x = 0; x < size.x; x++) {
        if (x != rand_case)
            map[y][x] = 'X';
    }
}

void rand_row(char **map, int y, vector2_t size)
{
    for (int x = 0; x < size.x; x++) {
        if (rand() % 100 < 70)
            map[y][x] = 'X';
    }
}

void build_imperfect(char **map, vector2_t size)
{
    for (int y = 0; y < size.y; y++) {
        if (y % 2 != 0)
            rand_row(map, y, size);
    }
}

void build_perfect(char **map, vector2_t size)
{
    for (int y = 0; y < size.y; y++) {
        if (y % 2 != 0)
            row(map, y, size);
    }
}