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
#include "include/my.h"

void poll_event(CSFML_t *texture)
{
	if (texture->event.type == sfEvtClosed)
		sfRenderWindow_close(texture->window);
	check_event_one(texture);
}

void print_window(CSFML_t *texture)
{
	sfClock_restart(texture->board->timer);
	sfClock_restart(texture->game->mv);
	while (sfRenderWindow_isOpen(texture->window)) {
		texture->basic->elapsed =
		sfClock_restart(texture->board->timer).microseconds / 1000000.f;
		texture->basic->el =
		sfClock_restart(texture->game->mv).microseconds / 1000000.f;
		while (sfRenderWindow_pollEvent(texture->window,
		&texture->event))
			poll_event(texture);
		sfRenderWindow_clear(texture->window, sfBlack);
		set_music(texture);
		draw_window(texture);
		sfRenderWindow_display(texture->window);
	}
	destroy(texture);
	destroy_two(texture);
	music_destroy(texture);
	destroy_window(texture);
}

void set_music(CSFML_t *texture)
{
	if (texture->basic->status == 0 && texture->basic->play_menu == 0) {
		sfMusic_play(texture->menu->music);
		texture->basic->play_menu = 1;
	} else if (texture->basic->status == 1
	&& texture->basic->play_game == 0) {
			sfMusic_stop(texture->menu->music);
			sfMusic_play(texture->game->music);
			texture->basic->play_game = 1;
	}
}

void draw_window(CSFML_t *texture)
{
	sfVector2i a = sfMouse_getPositionRenderWindow(texture->window);
	texture->menu->curs_pos.x = a.x;
	texture->menu->curs_pos.y = a.y;
	switch (texture->basic->status) {
		case 0:
			print_menu(texture);
			break;
		case 1:
			print_game(texture);
			break;
		case 2:
			sprite_pause(texture);
			break;
	}
	sfSprite_setPosition(texture->cursorsp, texture->menu->curs_pos);
	sfRenderWindow_drawSprite(texture->window, texture->cursorsp, NULL);
}

int main(int ac, char **av, char **env)
{
	if (env[0] == NULL)
		return (84);
	else if (ac == 2) {
		if (check_arg(av[1]) == 42)
			return (0);
		else
			my_printf("Error: %s is not a valid argument.\n",
			av[1]);
		return (0);
	}
	CSFML_t *texture = malloc(sizeof(CSFML_t));
	if (texture == NULL || my_malloc(texture) == 84)
		return (84);
	else if (init_all(texture) == 84)
		return (84);
	print_window(texture);
	my_free(texture);
	return (0);
}
