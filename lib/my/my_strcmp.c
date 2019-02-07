/*
** EPITECH PROJECT, 2017
** minishell
** File description:
** my_strcmp.c
*/

#include <stdio.h>

int my_strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int not = 0;

	while (s1[i] != '\0' || s2[j] != '\0') {
		if (s1[i] == s2[j]) {
			i++;
			j++;
		} else {
			not = 1;
			break;
		}
	}
	if (not == 0)
		return (0);
	else if (not == 1)
		return (1);
	return (0);
}
