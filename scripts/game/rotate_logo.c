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

void print_logo(CSFML_t *texture)
{
	sfVector2f logpos = {0, 708};
	init_time(texture);
	move(texture);
	sfSprite_setTextureRect(texture->game->logspr,
	texture->myrect->logrect);
	sfSprite_setPosition(texture->game->logspr, logpos);
	sfRenderWindow_drawSprite(texture->window, texture->game->logspr, NULL);
}

void init_time(CSFML_t *texture)
{
	texture->basic->chrono += texture->basic->elapsed;
	if (texture->basic->chrono > 1.0) {
		timer(texture);
		texture->basic->chrono -= 1.0;
	}
	sfText_setString(texture->board->time, texture->board->tim);
	sfText_setFont(texture->board->time, texture->board->font);
	sfText_setColor(texture->board->time, sfWhite);
	sfText_setCharacterSize(texture->board->time, 50);
}

void move(CSFML_t *texture)
{
	texture->basic->ch += texture->basic->el;
	if (texture->basic->ch > 0.1) {
		if (texture->myrect->logrect.left < 14904)
			texture->myrect->logrect.left += 621;
		else if (texture->myrect->logrect.left >= 14904)
			texture->myrect->logrect.left = 0;
		texture->basic->ch -= 0.1;
	}
}
