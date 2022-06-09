/*
** EPITECH PROJECT, 2022
** my
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "../../include/cly_io.h"

typedef struct vector2_s {
    int x;
    int y;
} vector2_t;

char **mem_maze(int y, int x);
char **malloc_array(vector2_t size, char base);
void print_map(char **map);
char **perfect_maze(char *c_x, char *c_y);
char **imperfect_maze(char *c_x, char *c_y);
int **generator_imperfect(int **maze, int x, int y);
void build_imperfect(char **map, vector2_t end);
void build_perfect(char **map, vector2_t size);

#endif
