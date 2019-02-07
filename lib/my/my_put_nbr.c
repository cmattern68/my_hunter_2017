/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** my_put_nbr
*/

#include "include/my.h"

int my_put_nbr(int nb)
{
	int mdlo;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
		if (nb >= 10) {
			mdlo = (nb % 10);
			nb = (nb - mdlo) / 10;
			my_put_nbr(nb);
			my_putchar(48 + mdlo);
		} else
			my_putchar(48 + nb % 10);
	}
}