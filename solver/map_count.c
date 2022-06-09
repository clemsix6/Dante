/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** map_count
*/

int map_count_columns(char *buffer)
{
    int i = 0;
    int columns = 0;

    for (; buffer[i] != '\n'; i++) {
        columns += 1;
    }
    return columns;
}

int map_count_lines(char *buffer)
{
    int i = 0;
    int lines = 0;

    for (;buffer[i] != '\0';i++) {
        if (buffer[i] == '\n') {
            lines += 1;
        }
    }
    return lines + 1;
}
