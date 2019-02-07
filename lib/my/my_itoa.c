/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** my_itoa.c
*/

#include <stdlib.h>
#include <math.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int get_nb_dg(int n)
{
	int i;
	int count;

	for (i = 10, count = 0; ; i *= 10, count++) {
		if (n / i == 0)
		break;
	}
	return count + 1;
}

char *my_itoa(int nbr)
{
	int nb_dg;
	int prev = 0;
	int i;
	int j;
	char *to_str;

	nb_dg = get_nb_dg(nbr);
	to_str = (char *)malloc(sizeof(char) * (nb_dg + 1));
	for (i = 0, j = pow(10, nb_dg - 1); i < nb_dg; i++,
	j /= 10) {
		to_str[i] = (nbr / j - (prev * 10)) + 48;
		prev = nbr / j;
	}
	to_str[i] = '\0';
	return (to_str);
}
