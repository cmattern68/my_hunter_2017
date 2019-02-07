/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** my_putstr
*/

#include "include/my.h"

int my_putstr(char const *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
		my_putchar(str[m]);
}