/*
** EPITECH PROJECT, 2022
** generator
** File description:
** generator
*/

#include "include/my.h"
#include <time.h>

int main(int ac, char **av)
{
    vector2_t dim = {atoi(av[1]), atoi(av[2])};
    char **map = malloc_array(dim, '*');

    srand((unsigned int)time(NULL));
    if (ac == 3)
        build_imperfect(map, dim);
    else if (ac == 4){
        if (strcmp(av[3], "imperfect") == 0)
            build_imperfect(map, dim);
        else if (strcmp(av[3], "perfect") == 0)
            build_perfect(map, dim);
    } else {
        exit(84);
    }
    map[dim.y - 1][dim.x - 1] = '*';
    print_map(map);
    return 0;
}
