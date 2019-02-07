##
## EPITECH PROJECT, 2017
## my_runner
## File description:
## Makefile
##

CC = gcc

SRC =	my_cook.c 				\
	scripts/init_destroy/init1.c		\
	scripts/init_destroy/init2.c 		\
	scripts/init_destroy/init_rect.c 	\
	scripts/init_destroy/destroy1.c		\
	scripts/menu/menu.c 			\
	scripts/menu/pause.c 			\
	scripts/event/event1.c 			\
	scripts/arg/check_arg.c 		\
	scripts/game/game.c 			\
	scripts/game/ing/ing.c 			\
	scripts/game/ing/bread.c 		\
	scripts/game/ing/meat.c 		\
	scripts/game/ing/sauces.c 		\
	scripts/game/ing/vegetables.c 		\
	scripts/my_malloc.c 			\
	scripts/game/head_bar.c 		\
	scripts/game/timer.c 			\
	scripts/game/print/print.c 		\
	scripts/game/print/serve.c 		\
	scripts/game/print/recipes.c 		\
	scripts/game/rotate_logo.c 		\

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -I./include/ -D_GNU_SOURCE -W -Wall -Wextra -Werror

LDFLAGS = -L ./lib/my -lmy -lm -lc_graph_prog

RM = rm -f

NAME = my_cook

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) $(LIB) -o $(NAME) $(LDFLAGS)

rc:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my rc
clean:
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re: fclean all

.PHONY: all rc clean fclean re
