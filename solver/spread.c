/*
** EPITECH PROJECT, 2022
** solver
** File description:
** spread
*/

#include <stdlib.h>

int test_neighbor(int **map, int x, int y, int neighbor)
{
    if (neighbor > 0) {
        map[y][x] = neighbor + 1;
        return 1;
    }
    return 0;
}

int spread_case(int **map, int x, int y)
{
    if (map[y][x] != 0)
        return 0;
    if (x > 0 && test_neighbor(map, x, y, map[y][x - 1]) == 1)
        return 1;
    if (test_neighbor(map, x, y, map[y][x + 1]) == 1)
        return 1;
    if (y > 0 && test_neighbor(map, x, y, map[y - 1][x]) == 1)
        return 1;
    if (test_neighbor(map, x, y, map[y + 1][x]) == 1)
        return 1;
    return 0;
}

int spread_line(int **map, int i)
{
    for (int j = 0; map[i][j] != -2; j++) {
        if (spread_case(map, j, i) == 1)
            return 1;
    }
    return 0;
}

void spread(int **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        if (spread_line(map, i) == 1)
            spread(map);
    }
}
