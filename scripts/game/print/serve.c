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

void print_end_button(CSFML_t *texture)
{
	sfVector2f btpos = {1506, 713};
	check_hover(texture);
	sfSprite_setTextureRect(texture->game->finsp,
	texture->myrect->finrect);
	sfSprite_setPosition(texture->game->finsp, btpos);
	sfRenderWindow_drawSprite(texture->window, texture->game->finsp, NULL);
}

void check_hover(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 1506
	&& texture->menu->curs_pos.x <= 1852)
	&& (texture->menu->curs_pos.y >= 713
	&& texture->menu->curs_pos.y <= 809)) {
		texture->myrect->finrect.left = 370;
		if (texture->event.type == sfEvtMouseButtonPressed
		&& texture->event.mouseButton.button == sfMouseLeft) {
			texture->myrect->finrect.left = 740;
			check_recipe(texture);
			texture->basic->click = 0;
			texture->basic->actv = 0;
		}
	} else {
		texture->myrect->finrect.left = 0;
	}
}

void check_recipe(CSFML_t *texture)
{
	if (texture->basic->avlb == 0) {
		if (check_my_recipe(texture) == 0)
			money(texture);
		texture->basic->avlb = 1;
	}
}

int check_my_recipe(CSFML_t *texture)
{
	int j = texture->recipes->select_recipe;

	if (texture->recipes->verify[j][0] - 64 == texture->ingbasics[0]->in) {
		if (check_my_recipe_two(texture, j) == 42)
			return (42);
		else
			return (0);
	} else
		return (42);
	return (0);
}

void money(CSFML_t *texture)
{
	if (texture->basic->mkmny == 0) {
		texture->basic->dollars += 5;
		texture->basic->mkmny = 1;
	}
}
