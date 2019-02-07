/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** init1.c
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

int my_malloc(CSFML_t *texture)
{
	texture->menu = malloc(sizeof(Menu_t));
	texture->basic = malloc(sizeof(Basics_t));
	texture->game = malloc(sizeof(Game_t));
	texture->board = malloc(sizeof(Board_t));
	for (int i = 0; i < 16; i++) {
		texture->ingbasics[i] = malloc(sizeof(Ingbasics_t));
		if (texture->ingbasics[i] == NULL)
			return (84);
	}
	texture->myrect = malloc(sizeof(Myrect_t));
	texture->recipes = malloc(sizeof(Recipes_t));
	if (texture->menu == NULL || texture->basic == NULL
	|| texture->game == NULL || texture->board == NULL
	|| texture->ingbasics == NULL || texture->myrect == NULL
	|| texture->recipes == NULL || my_str(texture) == 84)
		return (84);
	return (0);
}

int my_str(CSFML_t *texture)
{
	texture->recipes->recipes = malloc(sizeof(char *) * 11);
	for (int i = 0; i != 11; i++) {
		texture->recipes->recipes[i] = malloc(sizeof(char) * 100);
		if (texture->recipes->recipes[i] == NULL)
			return (84);
	}
	texture->recipes->verify = malloc(sizeof(char *) * 11);
	for (int j = 0; j != 11; j++) {
		texture->recipes->verify[j] = malloc(sizeof(char) * 100);
		if (texture->recipes->verify[j] == NULL)
			return (84);
	}
	if (texture->recipes->recipes == NULL)
		return (84);
	if (texture->recipes->verify == NULL)
		return (84);
	return (0);
}

void my_free(CSFML_t *texture)
{
	free(texture->game);
	free(texture->basic);
	free(texture->menu);
	free(texture->board);
	for (int i = 0; i < 16; i++)
		free(texture->ingbasics[i]);
	free(texture->myrect);
	for (int j = 0; j != 11; j++)
		free(texture->recipes->recipes[j]);
	for (int k = 0; k != 11; k++)
		free(texture->recipes->verify[k]);
	free(texture->recipes->recipes);
	free(texture->recipes->verify);
	free(texture->recipes);
	free(texture);
}
