/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int base_management(int i, const char *format, va_list arg);
int my_printf(const char *format, ...);
#endif /* MY_H */