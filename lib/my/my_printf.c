/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** my_printf
*/

#include <stdarg.h>
#include "include/my.h"

int base_management(int i, const char *format, va_list arg)
{
	if (format[i] == '%' && format[i + 1] == 's')
		my_putstr(va_arg(arg, char *));
	if (format[i] == '%' && format[i + 1] == 'd')
		my_put_nbr(va_arg(arg, int));
	return (0);
}

int my_printf(const char *format, ...)
{
	va_list arg;
	va_start(arg, format);

	for (int i = 0; format[i]; i++) {
		if (format[i] != '%')
			my_putchar(format[i]);
		if (format[i] == '%') {
			base_management(i, format, arg);
			i++;
		}
	}
	va_end(arg);
	return (0);
}