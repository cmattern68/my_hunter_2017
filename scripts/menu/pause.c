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

void set_zero(CSFML_t *texture)
{
	texture->board->tim[0] = '0';
	texture->board->tim[1] = '0';
	texture->board->tim[2] = ':';
	texture->board->tim[3] = '0';
	texture->board->tim[4] = '0';
	texture->basic->play_game = 0;
	texture->basic->play_menu = 0;
	texture->basic->handle = 0;
	texture->basic->timeout = 0;
	texture->basic->status = 0;
	texture->basic->menuv = 0;
	texture->basic->click = 0;
	texture->basic->actv = 0;
	texture->basic->dollars = 0;
	texture->basic->mkmny = 0;
	texture->basic->avlb = 0;
	texture->basic->elapsed = 0.0;
	texture->basic->chrono = 0.0;
	texture->basic->el = 0.0;
	texture->basic->ch = 0.0;
}

int check_button_two(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 700
	&& texture->menu->curs_pos.x <= 1154)
	&& (texture->menu->curs_pos.y >= 508
	&& texture->menu->curs_pos.y <= 611)) {
		texture->myrect->pauserect.left = 1372;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft) {
				set_zero(texture);
				set_zero_two(texture);
				texture->basic->status = 0;
		}
		return (42);
	}
	return (0);
}

int check_button_one(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 700
	&& texture->menu->curs_pos.x <= 1154)
	&& (texture->menu->curs_pos.y >= 375
	&& texture->menu->curs_pos.y <= 478)) {
		texture->myrect->pauserect.left = 915;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft)
			sfRenderWindow_close(texture->window);
		return (42);
	}
	return (0);
}

void check_mouse_pause_position(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 700
	&& texture->menu->curs_pos.x <= 1154)
	&& (texture->menu->curs_pos.y >= 247
	&& texture->menu->curs_pos.y <= 350)) {
		texture->myrect->pauserect.left = 458;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft)
				texture->basic->status = 1;
	} else if (check_button_one(texture) == 0
	&& check_button_two(texture) == 0)
		texture->myrect->pauserect.left = 2;
}

void sprite_pause(CSFML_t *texture)
{
	sfVector2f pos = {700, 0};

	check_mouse_pause_position(texture);
	sfSprite_setTextureRect(texture->menu->pausesp,
	texture->myrect->pauserect);
	sfSprite_setPosition(texture->menu->pausesp, pos);
	sfRenderWindow_drawSprite(texture->window, texture->menu->backsp,
	NULL);
	sfRenderWindow_drawSprite(texture->window, texture->menu->pausesp,
	NULL);
}
