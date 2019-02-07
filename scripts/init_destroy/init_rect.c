/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** init_rect.c
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

void init_rect_one(CSFML_t *texture)
{
	texture->myrect->menurect.left = 2;
	texture->myrect->menurect.top = 0;
	texture->myrect->menurect.width = 453;
	texture->myrect->menurect.height = 510;
	texture->myrect->pauserect.left = 2;
	texture->myrect->pauserect.top = 0;
	texture->myrect->pauserect.width = 453;
	texture->myrect->pauserect.height = 646;
	texture->myrect->ingrect.left = 0;
	texture->myrect->ingrect.top = 0;
	texture->myrect->ingrect.width = 400;
	texture->myrect->ingrect.height = 500;
	for (int i = 0; i <= 15; i++) {
		texture->ingbasics[i]->menuing.left = 0;
		texture->ingbasics[i]->menuing.top = 0;
		texture->ingbasics[i]->menuing.width = 927;
		texture->ingbasics[i]->menuing.height = 500;
	}
	init_rect_two(texture);
}

void init_rect_two(CSFML_t *texture)
{
	texture->myrect->finrect.left = 0;
	texture->myrect->finrect.top = 0;
	texture->myrect->finrect.width = 350;
	texture->myrect->finrect.height = 100;
	texture->myrect->logrect.left = 0;
	texture->myrect->logrect.top = 0;
	texture->myrect->logrect.width = 620;
	texture->myrect->logrect.height = 500;
	texture->myrect->rcprect.left = 0;
	texture->myrect->rcprect.top = 0;
	texture->myrect->rcprect.width = 500;
	texture->myrect->rcprect.height = 113;
}
