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

void my_position(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1470
	&& texture->menu->curs_pos.x <= 1654)
	&& (texture->menu->curs_pos.y >= 197
	&& texture->menu->curs_pos.y <= 391)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 438;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 0)
				texture->basic->menuv = 1;
	} else if (my_position_two(texture) == 0
	&& my_position_three(texture) == 0  && my_position_four(texture) == 0)
		texture->myrect->ingrect.left = 20;
}

int my_position_two(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1668
	&& texture->menu->curs_pos.x <= 1854)
	&& (texture->menu->curs_pos.y >= 197
	&& texture->menu->curs_pos.y <= 391)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 856;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 0)
				texture->basic->menuv = 2;
		return (42);
	}
	return (0);
}

int my_position_three(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1470
	&& texture->menu->curs_pos.x <= 1654)
	&& (texture->menu->curs_pos.y >= 403
	&& texture->menu->curs_pos.y <= 598)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 1274;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 0)
				texture->basic->menuv = 3;
			return (42);
		}
	return (0);
}

int my_position_four(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1668
	&& texture->menu->curs_pos.x <= 1854)
	&& (texture->menu->curs_pos.y >= 403
	&& texture->menu->curs_pos.y <= 598)
	&& texture->basic->timeout == 0) {
		texture->myrect->ingrect.left = 1692;
	if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft
		&& texture->basic->menuv == 0)
				texture->basic->menuv = 4;
		return (42);
	}
	return (0);
}

void display_basemenu(CSFML_t *texture)
{
	sfVector2f xpos = {1480, 190};
	my_position(texture);
	sfSprite_setTextureRect(texture->game->ingsp,
	texture->myrect->ingrect);
	sfSprite_setPosition(texture->game->ingsp, xpos);
	sfRenderWindow_drawSprite(texture->window, texture->game->ingsp,
	NULL);
}
