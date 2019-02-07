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

void my_meatposition(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1470
	&& texture->menu->curs_pos.x <= 1654)
	&& (texture->menu->curs_pos.y >= 197
	&& texture->menu->curs_pos.y <= 391)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 440;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 2)
				texture->basic->handle = 4;
	} else if (my_meatposition_two(texture) == 0
	&& my_meatposition_three(texture) == 0
	&& my_meatposition_four(texture) == 0
	&& back(texture) == 0)
		texture->myrect->ingrect.left = 20;
}

int my_meatposition_two(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1668
	&& texture->menu->curs_pos.x <= 1854)
	&& (texture->menu->curs_pos.y >= 197
	&& texture->menu->curs_pos.y <= 391)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 856;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 2)
				texture->basic->handle = 5;
		return (42);
	}
	return (0);
}

int my_meatposition_three(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1470
	&& texture->menu->curs_pos.x <= 1654)
	&& (texture->menu->curs_pos.y >= 403
	&& texture->menu->curs_pos.y <= 598)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 1276;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 2)
				texture->basic->handle = 6;
		return (42);
	}
	return (0);
}

int my_meatposition_four(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1668
	&& texture->menu->curs_pos.x <= 1854)
	&& (texture->menu->curs_pos.y >= 403
	&& texture->menu->curs_pos.y <= 598)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 1694;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 2)
				texture->basic->handle = 7;
		return (42);
	}
	return (0);
}

void display_meat(CSFML_t *texture)
{
	sfVector2f xpos = {1480, 190};
	my_meatposition(texture);
	if (back(texture) == 0)
		sfSprite_setTextureRect(texture->game->ingsp,
		texture->myrect->ingrect);
	sfSprite_setPosition(texture->game->ingsp, xpos);
	sfRenderWindow_drawSprite(texture->window, texture->game->ingsp,
	NULL);
}
