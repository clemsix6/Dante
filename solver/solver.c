/*
** EPITECH PROJECT, 2022
** solver
** File description:
** solver
*/

#include <stdbool.h>
#include <stdio.h>
#include "cly_lib.h"

int **map_to_array(char *buffer, int, int);
char *map_buffer(const char *filepath);
void spread(int **map);
int map_count_lines(char *buffer);
int map_count_columns(char *buffer);
int solve(int **map, int height, int width);

void print_map2(int **map, int i, int j)
{
    if (map[i][j] == -1)
        printf("X");
    else if (map[i][j] == -3)
        printf("o");
    else
        printf("*");
}

void print_map(int **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != -2; j++)
            print_map2(map, i, j);
        if (map[i + 1] != NULL)
            printf("\n");
    }
}

int **get_map(int ac, char **av, int *width, int *height)
{
    char *map_buff;

    if (ac != 2)
        return NULL;
    map_buff = map_buffer(av[1]);
    if (map_buff == NULL || map_buff[0] == 0)
        return NULL;
    *height = map_count_lines(map_buff);
    *width = map_count_columns(map_buff);
    if (*height <= 0 || *width <= 0)
        return NULL;
    return map_to_array(map_buff, *height, *width);
}

int main(int ac, char **av)
{
    int width;
    int height;
    int **map = get_map(ac, av, &width, &height);

    if (map == NULL)
        cly_write(1, "no solution found\n");
    map[0][0] = 1;
    spread(map);
    solve(map, height - 1, width - 1);
    print_map(map);
    return 0;
}
