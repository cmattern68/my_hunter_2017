/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** cpy.c
*/

char *cpy(char *dest, char const *src)
{
	int i = 0;

	while (src[i]) {
		dest[i] = src[i++];
	}
	dest[i] = '\0';
	return (dest);
}
