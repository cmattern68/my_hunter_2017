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

void set_zero_two(CSFML_t *texture)
{
	for (int i = 0; i < 16; i++)
		texture->ingbasics[i]->in = 0;
	texture->recipes->select_recipe = 0;
}

int check_menu_one(CSFML_t *texture)
{
	if ((texture->menu->curs_pos.x >= 700
	&& texture->menu->curs_pos.x <= 1154)
	&& (texture->menu->curs_pos.y >= 389
	&& texture->menu->curs_pos.y <= 493)) {
		texture->myrect->menurect.left = 908;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft)
				sfRenderWindow_close(texture->window);
		return (0);
	}
	return (42);
}

void check_mouse_position(CSFML_t *texture)
{
	sfVector2i a = sfMouse_getPosition((sfWindow *)texture->window);

	texture->menu->curs_pos.x = a.x;
	texture->menu->curs_pos.y = a.y;
	if ((texture->menu->curs_pos.x >= 700
	&& texture->menu->curs_pos.x <= 1154)
	&& (texture->menu->curs_pos.y >= 253
	&& texture->menu->curs_pos.y <= 357)) {
		texture->myrect->menurect.left = 455;
		if (texture->event.type == sfEvtMouseButtonReleased
		&& texture->event.mouseButton.button == sfMouseLeft)
				texture->basic->status = 1;
	} else if (check_menu_one(texture) == 42)
		texture->myrect->menurect.left = 2;
}

void sprite_menu(CSFML_t *texture)
{
	sfVector2f pos = {700, 0};

	check_mouse_position(texture);
	sfSprite_setTextureRect(texture->menu->menusp,
	texture->myrect->menurect);
	sfSprite_setPosition(texture->menu->menusp, pos);
	sfRenderWindow_drawSprite(texture->window, texture->menu->menusp, NULL);
}

void print_menu(CSFML_t *texture)
{
	sfRenderWindow_drawSprite(texture->window, texture->menu->backsp,
	NULL);
	sprite_menu(texture);
}
