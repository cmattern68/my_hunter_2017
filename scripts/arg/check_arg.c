/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** check_arg.c
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

void color(int param)
{
	my_printf("\033[%dm", param);
}

int check_arg(char *arg)
{
	if (my_strcmp(arg, "-h") == 0) {
		print_usage();
		return (42);
	}
	return (0);
}

void print_usage(void)
{
	color(CYAN);
	color(BIG);
	my_printf("*********************************************************"
	"*****\n* ");
	color(BLUE);
	my_printf("My-Saint_etienne, By Corentin MATTERN and Antoine PRONNIER");
	color(CYAN);
	color(BIG);
	my_printf(" *\n*******************************************************"
	"*******\n");
	color(RST);
	my_printf("\n   Option:\n");
	my_printf("     -h : Print the usage and quit.\n");
	my_printf("\n   Gameplay:\n");
	my_printf("     - You can use 15 ingredients per recipe maximum.\n");
	my_printf("     - Take the ingredients that you want, and put them down"
	" on the work plan. Here is a beautiful Kebab Chef!\n");
	print_usage_two();
}

void print_usage_two(void)
{
	my_printf("     - In my_cook_2017/scripts/game/timer.c, replace line 57"
	" in the system(); function, \"usr/bin/google-chrome\" by the path of "
	"your favorite browser \n");
	my_printf("     - If when you validate a recipe you do not earn money"
	", it means that there was an ingredient that should not be there\n");
}
