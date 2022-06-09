/*
** EPITECH PROJECT, 2022
** solver
** File description:
** solve
*/

#include <stdlib.h>
#include "my.h"

void solve_up(int **map, solve_t *solve_struct, int x, int y)
{
    if (y > 0) {
        solve_struct->neighbor = map[y - 1][x];
        if (IF_0 (IF_1 solve_struct->neighbor < solve_struct->min)) {
            solve_struct->min = solve_struct->neighbor;
            solve_struct->pos_x = x;
            solve_struct->pos_y = y - 1;
        }
    }
}

void solve_down(int **map, solve_t *solve_struct, int x, int y)
{
    if (map[y + 1] != NULL) {
        solve_struct->neighbor = map[y + 1][x];
        if (IF_0 (IF_1 solve_struct->neighbor < solve_struct->min)) {
            solve_struct->min = solve_struct->neighbor;
            solve_struct->pos_x = x;
            solve_struct->pos_y = y + 1;
        }
    }
}

void solve_left(int **map, solve_t *solve_struct, int x, int y)
{
    if (x > 0) {
        solve_struct->neighbor = map[y][x - 1];
        if (IF_0 (IF_1 solve_struct->neighbor < solve_struct->min)) {
            solve_struct->min = solve_struct->neighbor;
            solve_struct->pos_x = x - 1;
            solve_struct->pos_y = y;
        }
    }
}

void solve_right(int **map, solve_t *solve_struct, int x, int y)
{
    solve_struct->neighbor = map[y][x + 1];
    if (IF_0 (IF_1 solve_struct->neighbor < solve_struct->min)) {
        solve_struct->min = solve_struct->neighbor;
        solve_struct->pos_x = x + 1;
        solve_struct->pos_y = y;
    }
}

void solve(int **map, int y, int x)
{
    solve_t solve_struct;
    solve_struct.min = -1;
    map[y][x] = -3;
    solve_up(map, &solve_struct, x, y);
    solve_down(map, &solve_struct, x, y);
    solve_left(map, &solve_struct, x, y);
    solve_right(map, &solve_struct, x, y);
    if (solve_struct.min < 0)
        return;
    solve(map, solve_struct.pos_y, solve_struct.pos_x);
}
