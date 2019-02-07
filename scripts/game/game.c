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

sfIntRect threct = {0, 0, 400, 500};

void print_game(CSFML_t *texture)
{
	sfRenderWindow_drawSprite(texture->window, texture->game->oversprite,
	NULL);
	draw_score(texture);
	switch (texture->basic->menuv) {
		case 0:
			texture->myrect->ingrect.top = 0;
			display_basemenu(texture);
			break;
		case 1:
			texture->myrect->ingrect.top = 516;
			display_bread(texture);
			break;
		default:
			my_switch(texture);
			break;

	}
	print_end_button(texture);
	display_in_hand(texture);
	print_end(texture);
}

void my_switch(CSFML_t *texture)
{
	switch (texture->basic->menuv) {
		case 2:
			texture->myrect->ingrect.top = 1034;
			display_meat(texture);
			break;
		case 3:
			texture->myrect->ingrect.top = 1551;
			display_vege(texture);
			break;
		case 4:
			texture->myrect->ingrect.top = 2070;
			display_sauces(texture);
			break;
	}
}

int back(CSFML_t *texture)
{
	sfVector2f xpos = {1480, 190};
	if ((texture->menu->curs_pos.x >= 1470
	&& texture->menu->curs_pos.x <= 1854)
	&& (texture->menu->curs_pos.y >= 622
	&& texture->menu->curs_pos.y <= 675)
	&& texture->basic->timeout == 0) {
		if (texture->basic->menuv == 1) {
			texture->myrect->ingrect.top = 516;
			texture->myrect->ingrect.left = 1692;
			set_rect(texture, xpos);
			return (42);
		} else if (texture->basic->menuv >= 2
		&& texture->basic->menuv <= 4) {
			back_two(texture);
			set_rect(texture, xpos);
			return (42);
		}
	}
	return (0);
}

void set_rect(CSFML_t *texture, sfVector2f xpos)
{
	sfSprite_setTextureRect(texture->game->ingsp, texture->myrect->ingrect);
	sfSprite_setPosition(texture->game->ingsp, xpos);
	if (texture->event.type == sfEvtMouseButtonReleased
	&& texture->event.mouseButton.button == sfMouseLeft
	&& texture->basic->menuv != 0) {
		texture->basic->menuv = 0;
		texture->basic->handle = 0;
	}
}

void back_two(CSFML_t *texture)
{
	switch (texture->basic->menuv) {
		case 2:
			texture->myrect->ingrect.top = 1034;
			texture->myrect->ingrect.left = 2112;
			break;
		case 3:
			texture->myrect->ingrect.top = 1551;
			texture->myrect->ingrect.left = 2110;
			break;
		case 4:
			texture->myrect->ingrect.top = 2070;
			texture->myrect->ingrect.left = 2112;
			break;
	}
}
