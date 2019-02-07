/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** print.c
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../../include/my.h"

int check_my_recipe_two(CSFML_t *texture, int j)
{
	int rly = 0;

	for (int i = 1; i <= texture->basic->click; i++) {
		for (int k = 0; texture->recipes->verify[j][k] != '\0'; k++) {
			if (texture->recipes->verify[j][k] - 64  ==
			texture->ingbasics[i]->in)
				rly++;
		}
		if (rly == 0)
			return (42);
	}
	return (0);
}
