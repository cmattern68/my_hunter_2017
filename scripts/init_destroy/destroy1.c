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

void destroy_window(CSFML_t *texture)
{
	sfRenderWindow_destroy(texture->window);
}

void music_destroy(CSFML_t *texture)
{
	sfMusic_destroy(texture->menu->music);
	sfMusic_destroy(texture->game->music);
	sfClock_destroy(texture->board->timer);
	sfClock_destroy(texture->game->mv);
	sfText_destroy(texture->board->time);
	sfText_destroy(texture->board->dollarst);
	sfText_destroy(texture->board->dollars);
	sfText_destroy(texture->board->ing);
	sfFont_destroy(texture->board->font);
	sfFont_destroy(texture->board->fontt);
}

void destroy(CSFML_t *texture)
{
	sfSprite_destroy(texture->menu->menusp);
	sfSprite_destroy(texture->menu->backsp);
	sfSprite_destroy(texture->menu->pausesp);
	sfSprite_destroy(texture->cursorsp);
	sfSprite_destroy(texture->game->ingsp);
	sfSprite_destroy(texture->game->oversprite);
	sfSprite_destroy(texture->game->endsprite);
	sfSprite_destroy(texture->game->finsp);
	for (int i = 0; i <= 15; i++) {
		sfSprite_destroy(texture->ingbasics[i]->ingspsh);
		sfTexture_destroy(texture->ingbasics[i]->ingsh);
	}
	sfTexture_destroy(texture->game->finish);
	sfTexture_destroy(texture->game->endgame);
	sfTexture_destroy(texture->game->overlay);
	sfTexture_destroy(texture->game->ing);
	sfTexture_destroy(texture->menu->menu);
	sfTexture_destroy(texture->menu->back);
	sfTexture_destroy(texture->menu->pause);
	sfTexture_destroy(texture->cursor);
}

void destroy_two(CSFML_t *texture)
{
	sfSprite_destroy(texture->game->logspr);
	sfSprite_destroy(texture->game->rcpspr);
	sfTexture_destroy(texture->game->rcp);
	sfTexture_destroy(texture->game->logo);
}
