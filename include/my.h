/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** my_cook.c
*/

#ifndef MY_H
#define MY_H
#include "struct.h"
#include "define.h"

char *my_itoa(int nbr);
int my_strcmp(char *s1, char *s2);
char *cpy(char *dest, char const *src);
int my_atoi(char *str);
int my_printf(const char *format, ...);
int init_all(CSFML_t *texture);
int texte_init(CSFML_t *texture);
void destroy_window(CSFML_t *texture);
int init_menu_music(CSFML_t *texture);
void music_destroy(CSFML_t *texture);
void print_menu(CSFML_t *texture);
void draw_window(CSFML_t *texture);
void destroy(CSFML_t *texture);
void destroy(CSFML_t *two);
void set_music(CSFML_t *texture);
void check_mouse_pause_position(CSFML_t *texture);
void sprite_pause(CSFML_t *texture);
void print_pause(CSFML_t *texture);
int check_button_two(CSFML_t *texture);
int check_button_one(CSFML_t *texture);
void check_event_one(CSFML_t *texture);
int check_menu_one(CSFML_t *texture);
void color(int param);
int check_arg(char *arg);
void print_usage(void);
void print_game(CSFML_t *texture);
void check_event_two(CSFML_t *texture);
void draw_score(CSFML_t *texture);
int my_malloc(CSFML_t *texture);
void my_free(CSFML_t *texture);
void draw_time(CSFML_t *texture);
void draw_dollars(CSFML_t *texture);
void display_basemenu(CSFML_t *texture);
void my_position(CSFML_t *texture);
int my_position_two(CSFML_t *texture);
int my_position_three(CSFML_t *texture);
int my_position_four(CSFML_t *texture);
void my_breadposition(CSFML_t *texture);
int my_breadposition_two(CSFML_t *texture);
int my_breadposition_three(CSFML_t *texture);
int my_breadposition_four(CSFML_t *texture);
void display_bread(CSFML_t *texture);
int back(CSFML_t *texture);
void back_two(CSFML_t *texture);
void set_rect(CSFML_t *texture, sfVector2f xpos);
void click(CSFML_t *texture);
void my_meatposition(CSFML_t *texture);
int my_meatposition_two(CSFML_t *texture);
int my_meatposition_three(CSFML_t *texture);
int my_meatposition_four(CSFML_t *texture);
void display_meat(CSFML_t *texture);
void my_saucesposition(CSFML_t *texture);
int my_saucesposition_two(CSFML_t *texture);
int my_saucesposition_three(CSFML_t *texture);
int my_saucesposition_four(CSFML_t *texture);
void display_sauces(CSFML_t *texture);
void my_vegeposition(CSFML_t *texture);
int my_vegeposition_two(CSFML_t *texture);
int my_vegeposition_three(CSFML_t *texture);
int my_vegeposition_four(CSFML_t *texture);
void display_vege(CSFML_t *texture);
void timer(CSFML_t *texture);
int time_one(CSFML_t *texture);
int time_two(CSFML_t *texture);
int time_three(CSFML_t *texture);
int time_four(CSFML_t *texture);
void print_end(CSFML_t *texture);
void set_zero(CSFML_t *texture);
void display_in_hand(CSFML_t *texture);
int ing_init(CSFML_t *texture);
void init_rect_one(CSFML_t *texture);
void init_rect_two(CSFML_t *texture);
void my_switch(CSFML_t *texture);
void print_in_table(CSFML_t *texture);
int dsp_to_chk(CSFML_t *texture);
int my_chk(CSFML_t *texture);
void print_end_button(CSFML_t *texture);
void check_hover(CSFML_t *texture);
void correct_position(CSFML_t *texture);
void print_logo(CSFML_t *texture);
int init_log(CSFML_t *texture);
void init_time(CSFML_t *texture);
void move(CSFML_t *texture);
void destroy_two(CSFML_t *texture);
void init_recipe(CSFML_t *texture);
void print_ingredients(CSFML_t *texture);
void init_recipe(CSFML_t *texture);
void print_recipe(CSFML_t *texture);
int my_str(CSFML_t *texture);
void chk_one(CSFML_t *texture);
void chk_two(CSFML_t *texture);
void print_recipe_overlay(CSFML_t *texture);
void check_recipe(CSFML_t *texture);
int check_my_recipe(CSFML_t *texture);
int check_my_recipe_two(CSFML_t *texture, int j);
void money(CSFML_t *texture);
void print_money(CSFML_t *texture);
void set_zero_two(CSFML_t *texture);
void print_usage_two(void);

#endif /* MY_H */
