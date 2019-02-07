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

void display_in_hand(CSFML_t *texture)
{
	print_in_table(texture);
	if (texture->basic->click <= 15) {
		correct_position(texture);
		dsp_to_chk(texture);
	}
}

void correct_position(CSFML_t *texture)
{
	if (texture->basic->handle >= 1 && texture->basic->handle <= 3) {
		texture->ingbasics[texture->basic->click]->screen_pos.x =
		texture->menu->curs_pos.x - 350;
		texture->ingbasics[texture->basic->click]->screen_pos.y =
		texture->menu->curs_pos.y - 100;
	} else if (texture->basic->handle >= 3
	&& texture->basic->handle <= 15) {
		texture->ingbasics[texture->basic->click]->screen_pos.x =
		texture->menu->curs_pos.x - 100;
		texture->ingbasics[texture->basic->click]->screen_pos.y =
		texture->menu->curs_pos.y - 50;
	}
}

int dsp_to_chk(CSFML_t *texture)
{
	if (texture->basic->handle > 0 && texture->basic->handle <= 15
	&& texture->basic->timeout == 0) {
		texture->ingbasics[texture->basic->click]->menuing.left =
		927 * (texture->basic->handle - 1);
		sfSprite_setTextureRect(
		texture->ingbasics[texture->basic->click]->ingspsh,
		texture->ingbasics[texture->basic->click]->menuing);
		sfSprite_setPosition(
		texture->ingbasics[texture->basic->click]->ingspsh,
		texture->ingbasics[texture->basic->click]->screen_pos);
		sfRenderWindow_drawSprite(texture->window,
		texture->ingbasics[texture->basic->click]->ingspsh,
		NULL);
		if (my_chk(texture) == 42)
			return (0);
	}
	return (0);
}

int my_chk(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 327
	&& texture->menu->curs_pos.x <= 1465)
	&& (texture->menu->curs_pos.y >= 711
	&& texture->menu->curs_pos.y <= 1070)
	&& texture->event.type == sfEvtMouseButtonReleased
	&& texture->event.mouseButton.button == sfMouseLeft) {
		print_in_table(texture);
		texture->ingbasics[texture->basic->click]->in =
		texture->basic->handle;
		texture->basic->click++;
		texture->basic->handle = 0;
		return (42);
	}
	return (0);
}

void print_in_table(CSFML_t *texture)
{
	if (texture->basic->click > 0) {
		for (int i = 0; i <= texture->basic->click - 1; i++) {
			sfSprite_setTextureRect(
			texture->ingbasics[i]->ingspsh,
			texture->ingbasics[i]->menuing);
			sfSprite_setPosition(
			texture->ingbasics[i]->ingspsh,
			texture->ingbasics[i]->screen_pos);
			sfRenderWindow_drawSprite(texture->window,
			texture->ingbasics[i]->ingspsh, NULL);
		}
		texture->basic->mkmny = 0;
		texture->basic->avlb = 0;
	}
}
