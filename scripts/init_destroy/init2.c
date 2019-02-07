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

int texte_init(CSFML_t *texture)
{
	texture->board->time = sfText_create();
	texture->board->dollars = sfText_create();
<<<<<<< HEAD
	texture->board->font = sfFont_createFromFile("assets/fonts/font.ttf");
	sfText_setFont(texture->board->score, texture->board->font);
	sfText_setFont(texture->board->time, texture->board->font);
	sfText_setFont(texture->board->dollars, texture->board->font);
	sfText_setString(texture->board->score, "0");
	sfText_setString(texture->board->time, "0:00");
	sfText_setString(texture->board->dollars, "0$");
	sfText_setColor(texture->board->score, sfWhite);
	sfText_setColor(texture->board->time, sfWhite);
	sfText_setColor(texture->board->dollars, sfWhite);
	sfText_setCharacterSize(texture->board->score, 100);
	sfText_setCharacterSize(texture->board->time, 100);
	sfText_setCharacterSize(texture->board->dollars, 100);
	if (texture->board->score == NULL || texture->board->time == NULL
	    || texture->board->dollars == NULL || texture->board->font == NULL)
=======
	texture->board->dollarst = sfText_create();
	texture->board->ing = sfText_create();
	texture->board->font = sfFont_createFromFile(MYFONT);
	texture->board->fontt = sfFont_createFromFile(MYFONTT);
	sfText_setString(texture->board->dollarst, " $");
	sfText_setFont(texture->board->dollarst, texture->board->font);
	sfText_setColor(texture->board->dollarst, sfWhite);
	sfText_setCharacterSize(texture->board->dollarst, 50);
	texture->basic->dollars = 0;
	texture->basic->mkmny = 0;
	texture->basic->timeout = 0;
	texture->basic->avlb = 0;
	if (texture->board->time == NULL || texture->board->dollars == NULL
	|| texture->board->font == NULL || texture->board->fontt == NULL
	|| ing_init(texture) == 84 || texture->board->dollarst == NULL)
>>>>>>> 2ea9879cb59937431ee5977a778b0b29f157c977
		return (84);
	return (0);
}

int ing_init(CSFML_t *texture)
{
	for (int i = 0; i <= 15; i++) {
		texture->ingbasics[i]->in = 0;
		texture->ingbasics[i]->ingsh = sfTexture_createFromFile(
		INGSPR, NULL);
		texture->ingbasics[i]->ingspsh = sfSprite_create();
		sfSprite_setTexture(texture->ingbasics[i]->ingspsh,
		texture->ingbasics[i]->ingsh, sfTrue);
		if (texture->ingbasics[i]->ingsh == NULL
		|| texture->ingbasics[i]->ingspsh == NULL)
			return (84);
	}
	texture->game->finish = sfTexture_createFromFile(FNSPR, NULL);
	texture->game->finsp = sfSprite_create();
	sfSprite_setTexture(texture->game->finsp,
	texture->game->finish, sfTrue);
	if (texture->game->finish == NULL || texture->game->finsp == NULL
	|| init_log(texture) == 84)
		return (84);
	init_rect_one(texture);
	return (0);
}

int init_log(CSFML_t *texture)
{
	texture->basic->actv = 0;
	texture->basic->elapsed = 0.0;
	texture->basic->chrono = 0.0;
	texture->basic->el = 0.0;
	texture->basic->ch = 0.0;
	texture->game->mv = sfClock_create();
	texture->game->logo = sfTexture_createFromFile(LOGSPR, NULL);
	texture->game->logspr = sfSprite_create();
	sfSprite_setTexture(texture->game->logspr,
	texture->game->logo, sfTrue);
	texture->game->rcp = sfTexture_createFromFile(RECIPEYKP, NULL);
	texture->game->rcpspr = sfSprite_create();
	sfSprite_setTexture(texture->game->rcpspr, texture->game->rcp, sfTrue);
	if (texture->game->logo == NULL || texture->game->logspr == NULL
	|| texture->game->mv == NULL || texture->game->rcp == NULL ||
	texture->game->rcpspr == NULL)
		return (84);
	init_recipe(texture);
	return (0);
}

void init_recipe(CSFML_t *texture)
{
	cpy(texture->recipes->recipes[0], RCPA);
	cpy(texture->recipes->recipes[1], RCPB);
	cpy(texture->recipes->recipes[2], RCPC);
	cpy(texture->recipes->recipes[3], RCPD);
	cpy(texture->recipes->recipes[4], RCPE);
	cpy(texture->recipes->recipes[5], RCPF);
	cpy(texture->recipes->recipes[6], RCPG);
	cpy(texture->recipes->recipes[7], RCPH);
	cpy(texture->recipes->recipes[8], RCPI);
	cpy(texture->recipes->recipes[9], RCPJ);
	cpy(texture->recipes->verify[0], VEFA);
	cpy(texture->recipes->verify[1], VEFB);
	cpy(texture->recipes->verify[2], VEFC);
	cpy(texture->recipes->verify[3], VEFD);
	cpy(texture->recipes->verify[4], VEFE);
	cpy(texture->recipes->verify[5], VEFF);
	cpy(texture->recipes->verify[6], VEFG);
	cpy(texture->recipes->verify[7], VEFH);
	cpy(texture->recipes->verify[8], VEFI);
	cpy(texture->recipes->verify[9], VEFJ);
}
