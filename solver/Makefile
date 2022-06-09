##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## my make file
##

NAME = solver
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NBR_OF_FILES := $(words $(SRCS))
CC = gcc

CFLAGS_LIB = -I../include/ -L../lib/cly -lcly
CFLAGS = -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
		@ echo "[0m \033[1;34m$(NBR_OF_FILES)\033[0m"
		@ $(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(CFLAGS_LIB)
		@ echo "[1;34m created sucesfully.\033[0m"

clean:
		@ echo "\033[3;31mRemoving: \033[0m"
		@ echo "\033[3;31m$(OBJS)\033[0m" | tr ' ' '\n'
		@ rm -f $(OBJS)

fclean:	clean
		@ echo "\033[3;31m./$(NAME)\033[0m"
		@ rm -f $(NAME)

re: 	fclean all

%.o:	%.c
		@ echo "\033[1;34m[ OK ]\033[0m Compiling" $<
		@ $(CC) -o $@ -c $< $(CFLAGS)

.PHONY: all clean fclean re
