/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** my_cook.c
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

void check_event_one(CSFML_t *texture)
{
	if (texture->event.type == sfEvtKeyPressed
	&& texture->event.key.code == sfKeyEscape) {
		if (texture->basic->status == 1) {
			texture->basic->status = 2;
		}
		else if (texture->basic->status == 2) {
			texture->basic->status = 1;
		}
	}
}
