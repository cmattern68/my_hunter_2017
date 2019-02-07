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
#include "../../include/my.h"

void draw_score(CSFML_t *texture)
{
	sfVector2f time_pos = {50, 62};
	sfVector2f dollars_pos = {1680, 62};
	sfVector2f dollars_two = {1830, 62};

	print_logo(texture);
	print_recipe(texture);
	print_money(texture);
	sfText_setPosition(texture->board->time, time_pos);
	sfText_setPosition(texture->board->dollars, dollars_pos);
<<<<<<< HEAD
	printf("%s\n","bite");
	sfRenderWindow_drawText(texture->window, texture->board->score, NULL);
	sfRenderWindow_drawText(texture->window, texture->board->time, NULL);
	sfRenderWindow_drawText(texture->window, texture->board->dollars, NULL);
	sfRenderWindow_display(texture->window);
=======
	sfText_setPosition(texture->board->dollarst, dollars_two);
	sfRenderWindow_drawText(texture->window, texture->board->time, NULL);
	sfRenderWindow_drawText(texture->window, texture->board->dollars, NULL);
	sfRenderWindow_drawText(texture->window, texture->board->dollarst,
	NULL);
}

void timer(CSFML_t *texture)
{
	if (texture->basic->timeout == 0) {
		if (time_one(texture) == 52)
			texture->basic->timeout = 1;
		else if (time_two(texture) == 42
		&& texture->basic->timeout == 0)
			texture->board->tim[4] += 1;
	}
}

void print_recipe(CSFML_t *texture)
{
	sfVector2f ing_pos = {435, -3};

	if (texture->basic->actv == 0) {
		texture->recipes->select_recipe = rand() % 10;
		texture->basic->actv = 1;
	}
	sfText_setString(texture->board->ing,
	texture->recipes->recipes[texture->recipes->select_recipe]);
	sfText_setFont(texture->board->ing, texture->board->fontt);
	sfText_setColor(texture->board->ing, sfWhite);
	sfText_setCharacterSize(texture->board->ing, 60);
	sfText_setPosition(texture->board->ing, ing_pos);
	sfRenderWindow_drawText(texture->window, texture->board->ing, NULL);
	print_recipe_overlay(texture);
}

void print_recipe_overlay(CSFML_t *texture)
{
	sfVector2f rcpos = {-25, 200};
	int j = texture->recipes->select_recipe;

	if (texture->recipes->recipes[j][0] == 'K')
		texture->myrect->rcprect.left = 0;
	else if (texture->recipes->recipes[j][0] == 'Y')
		texture->myrect->rcprect.left = 500;
	else
		texture->myrect->rcprect.left = 1000;
	sfSprite_setTextureRect(texture->game->rcpspr,
	texture->myrect->rcprect);
	sfSprite_setPosition(texture->game->rcpspr, rcpos);
	sfRenderWindow_drawSprite(texture->window, texture->game->rcpspr, NULL);
}

void print_money(CSFML_t *texture)
{
	char *dls = my_itoa(texture->basic->dollars);
	sfText_setString(texture->board->dollars, dls);
	sfText_setFont(texture->board->dollars, texture->board->font);
	sfText_setColor(texture->board->dollars, sfWhite);
	sfText_setCharacterSize(texture->board->dollars, 50);
	free(dls);
>>>>>>> 2ea9879cb59937431ee5977a778b0b29f157c977
}
