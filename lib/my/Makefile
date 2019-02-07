##
## EPITECH PROJECT, 2017
## my_runner
## File description:
## Makefile
##

SRC	=	my_putchar.c 	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_printf.c 	\
		my_itoa.c 	\
		my_strcmp.c 	\
		my_strcpy.c 	\
		my_atoi.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

rc:
	$(RM) *.o
	$(RM) libmy.a

clean :
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:	echo $(USER) > auteur
