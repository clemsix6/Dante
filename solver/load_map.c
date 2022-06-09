/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** load_map
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int map_count_columns(char *buffer);
int map_count_lines(char *buffer);

int **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    int **arr = malloc(sizeof(int *) * (nb_rows + 1));

    for (int i = 0; i < nb_rows; i++)
        arr[i] = malloc(sizeof(int) * (nb_cols + 1));
    for (int i = 0; i < nb_rows; i++) {
        for (int j = 0; j < nb_cols; j++)
            arr[i][j] = 0;
        arr[i][nb_cols] = -2;
    }
    arr[nb_rows] = NULL;
    return arr;
}

int if_endligne(char *buffer, int a)
{
    if (buffer[a] == '\n') {
        a += 1;
    }
    return a;
}

int **map_to_array(char *buffer, int lines, int columns)
{
    int a = 0;
    int **array = mem_alloc_2d_array(lines, columns);

    for (int i = 0; i < lines;i++) {
        for (int j = 0; j < columns;j++) {
            a = if_endligne(buffer, a);
            array[i][j] = buffer[a] == 'X' ? -1 : 0;
            a += 1;
        }
    }
    free(buffer);
    return array;
}

char *map_buffer(const char *filepath)
{
    struct stat file;
    stat(filepath, &file);
    char *buffer = malloc(sizeof(char) * file.st_size + 1);
    int fd = STDOUT_FILENO;

    fd = open(filepath, O_RDONLY);
    ssize_t n = read(fd, buffer, file.st_size);
    buffer[n] = '\0';
    close(fd);
    return buffer;
}
