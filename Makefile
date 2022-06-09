##
## EPITECH PROJECT, 2022
## Makefile all
## File description:
## call make
##

all : lib_make
	@echo "\033[3;31m[ START GENERATOR COMPILATION ] \033[0m"
	@make -C generator
	@echo "\033[3;31m \n[ START SOLVER COMPILATION ] \033[0m"
	@make -C solver

lib_make:
	make -C lib/cly

clean :
	@echo "\033[1;36m[ START GENERATOR CLEANNING ] \033[0m"
	@make  -C generator clean
	@echo "\033[1;36m[ START SOLVER CLEANNING ] \033[0m"
	@make  -C solver clean
	@make -C lib/cly clean

fclean : clean
	@echo "\033[1;36m[ START GENERATOR FCLEANNING ] \033[0m"
	@make  -C generator fclean
	@echo "\033[1;36m[ START SOLVER FCLEANNING ] \033[0m"
	@make  -C solver fclean
	@make -C lib/cly fclean

re : fclean all