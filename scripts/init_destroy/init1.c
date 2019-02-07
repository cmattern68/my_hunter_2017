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

int init_game(CSFML_t *texture)
{
	texture->game->overlay = sfTexture_createFromFile(OVERLAYIMG, NULL);
	texture->game->ing = sfTexture_createFromFile(INGMENU, NULL);
	texture->game->endgame = sfTexture_createFromFile(ENDBACK, NULL);
	texture->game->oversprite = sfSprite_create();
	texture->game->ingsp = sfSprite_create();
	texture->game->endsprite = sfSprite_create();
	sfSprite_setTexture(texture->game->oversprite, texture->game->overlay,
	sfTrue);
	sfSprite_setTexture(texture->game->ingsp, texture->game->ing, sfTrue);
	sfSprite_setTexture(texture->game->endsprite, texture->game->endgame,
	sfTrue);
	if (texture->game->overlay == NULL || texture->game->oversprite == NULL
	|| texture->game->ing == NULL || texture->game->ingsp == NULL
	|| texte_init(texture) == 84 || texture->game->endgame == NULL
	|| texture->game->endsprite == NULL)
		return (84);
	return (0);
}

int init_menu_texture(CSFML_t *texture)
{
	texture->menu->back = sfTexture_createFromFile(BACKMENU, NULL);
	texture->menu->menu = sfTexture_createFromFile(PRCPMENU, NULL);
	texture->menu->pause = sfTexture_createFromFile(PAUSEMENU, NULL);
	texture->menu->backsp = sfSprite_create();
	texture->menu->menusp = sfSprite_create();
	texture->menu->pausesp = sfSprite_create();
	sfSprite_setTexture(texture->menu->backsp, texture->menu->back, sfTrue);
	sfSprite_setTexture(texture->menu->menusp, texture->menu->menu, sfTrue);
	sfSprite_setTexture(texture->menu->pausesp, texture->menu->pause,
	sfTrue);
	if (texture->menu->back == NULL || texture->menu->menu == NULL
	|| texture->menu->backsp == NULL || texture->menu->menusp == NULL
	|| texture->menu->pause == NULL || texture->menu->pausesp == NULL
	|| init_game(texture) == 84)
		return (84);
	return (0);
}

int init_menu_music(CSFML_t *texture)
{
	texture->menu->music = sfMusic_createFromFile(MUSICMENU);
	texture->game->music = sfMusic_createFromFile(MUSICGAME);
	texture->board->timer = sfClock_create();
	texture->board->tim[0] = '0';
	texture->board->tim[1] = '0';
	texture->board->tim[2] = ':';
	texture->board->tim[3] = '0';
	texture->board->tim[4] = '0';
	texture->board->tim[5] = '\0';
	texture->basic->click = 0;
	if (texture->menu->music == NULL || texture->game->music == NULL
	|| texture->board->timer == NULL)
		return (84);
	return (0);
}

int init_window(CSFML_t *texture)
{
	sfVideoMode mode = {1920, 1080, 32};
	texture->window = sfRenderWindow_create(mode, TLE, sfFullscreen, NULL);
	sfRenderWindow_setMouseCursorVisible(texture->window, sfFalse);
	sfRenderWindow_setFramerateLimit(texture->window, 60);
	sfRenderWindow_setVerticalSyncEnabled(texture->window, sfTrue);
	texture->cursor = sfTexture_createFromFile(MYCURSOR, NULL);
	texture->cursorsp = sfSprite_create();
	sfSprite_setTexture(texture->cursorsp, texture->cursor, sfTrue);
	texture->basic->status = 0;
	texture->basic->play_game = 0;
	texture->basic->play_menu = 0;
	texture->basic->handle = 0;
	texture->basic->menuv = 0;
	if (texture->window == NULL || texture->cursor == NULL
	|| texture->cursorsp == NULL)
		return (84);
	return (0);
}

int init_all(CSFML_t *texture)
{
	if (init_window(texture) == 84 || init_menu_music(texture) == 84
	|| init_menu_texture(texture) == 84) {
		write(2,
		"Error: An error occurred while loading textures.\n", 49);
		return (84);
	}
	return (0);
}
