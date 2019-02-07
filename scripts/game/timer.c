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

int time_two(CSFML_t *texture)
{
	if (texture->board->tim[3] < '5' && texture->board->tim[4] == '9') {
		texture->board->tim[3] += 1;
		texture->board->tim[4] = '0';
	} else if (texture->board->tim[3] == '5'
	&& texture->board->tim[4] == '9') {
		if (texture->board->tim[1] >= '9') {
			texture->board->tim[0] += 1;
			texture->board->tim[1] = '0';
		} else
			texture->board->tim[1] += 1;
		texture->board->tim[3] = '0';
		texture->board->tim[4] = '0';
	} else
		return (42);
	return (0);
}

int time_one(CSFML_t *texture)
{
	if (texture->board->tim[0] >= '6' && texture->board->tim[1] >= '0'
	&& texture->board->tim[3] >= '0' && texture->board->tim[4] >= '0') {
		return (52);
	}
	return (0);
}

void print_end(CSFML_t *texture)
{
	if (texture->basic->timeout == 1) {
		sfVector2f endpos = {576, 230};
		sfSprite_setPosition(texture->game->endsprite, endpos);
		sfRenderWindow_drawSprite(texture->window,
		texture->game->endsprite, NULL);
		if ((texture->menu->curs_pos.x >= 755
		&& texture->menu->curs_pos.x <= 1164)
		&& (texture->menu->curs_pos.y >= 573
		&& texture->menu->curs_pos.y <= 688)
		&& texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft) {
			system("/usr/bin/google-chrome "
			"paypal.me/MCorentin");
		}
	}
}
