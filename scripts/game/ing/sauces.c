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
#include "../../../include/my.h"

void my_saucesposition(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1470
	&& texture->menu->curs_pos.x <= 1654)
	&& (texture->menu->curs_pos.y >= 197
	&& texture->menu->curs_pos.y <= 391)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 440;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 4)
				texture->basic->handle = 12;
	} else if (my_saucesposition_two(texture) == 0
	&& my_saucesposition_three(texture) == 0
	&& my_saucesposition_four(texture) == 0
	&& back(texture) == 0)
		texture->myrect->ingrect.left = 20;
}

int my_saucesposition_two(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1668
	&& texture->menu->curs_pos.x <= 1854)
	&& (texture->menu->curs_pos.y >= 197
	&& texture->menu->curs_pos.y <= 391)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 858;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 4)
				texture->basic->handle = 13;
		return (42);
	}
	return (0);
}

int my_saucesposition_three(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1470
	&& texture->menu->curs_pos.x <= 1654)
	&& (texture->menu->curs_pos.y >= 403
	&& texture->menu->curs_pos.y <= 598)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 1276;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 4)
				texture->basic->handle = 14;
		return (42);
	}
	return (0);
}

int my_saucesposition_four(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1668
	&& texture->menu->curs_pos.x <= 1854)
	&& (texture->menu->curs_pos.y >= 403
	&& texture->menu->curs_pos.y <= 598)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 1693;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 4)
				texture->basic->handle = 15;
		return (42);
	}
	return (0);
}

void display_sauces(CSFML_t *texture)
{
	sfVector2f xpos = {1479, 190};
	my_saucesposition(texture);
	if (back(texture) == 0)
		sfSprite_setTextureRect(texture->game->ingsp,
		texture->myrect->ingrect);
	sfSprite_setPosition(texture->game->ingsp, xpos);
	sfRenderWindow_drawSprite(texture->window, texture->game->ingsp,
	NULL);
}
