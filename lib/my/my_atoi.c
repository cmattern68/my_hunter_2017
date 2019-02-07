/*
** EPITECH PROJECT, 2017
** my_atoi.c
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
	int nb = 0;

	while (*str >= '0' && *str <= '9') {
		nb = nb * 10 + (*str - '0');
		(str)++;
	}
	return (nb);
}