/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** my_cook.c
*/

#ifndef STRUCT_H
#define STRUCT_H

enum color_e {
	BLACK = 30,
	RED = 31,
	GREEN = 32,
	YELLOW = 33,
	BLUE = 34,
	MAGENTA = 35,
	CYAN = 36,
	WHITE = 37,
	RST = 0,
	BIG = 1,
	UNDERLINE = 4,
	BLINK = 5,
	BIGLINE = 7,
};

typedef struct s_Menu
{
	sfTexture *back;
	sfTexture *menu;
	sfTexture *pause;
	sfSprite *backsp;
	sfSprite *menusp;
	sfSprite *pausesp;
	sfMusic *music;
	sfVector2f curs_pos;
} Menu_t;

typedef struct s_Basics
{
	int status;
	int play_menu;
	int play_game;
	int menuv;
	int timeout;
	int click;
	int handle;
	int actv;
	int dollars;
	int mkmny;
	int avlb;
	float elapsed;
	float chrono;
	float el;
	float ch;
} Basics_t;

typedef struct s_Game
{
	sfTexture *overlay;
	sfTexture *ing;
	sfTexture *endgame;
	sfTexture *finish;
	sfTexture *logo;
	sfTexture *rcp;
	sfSprite *oversprite;
	sfSprite *ingsp;
	sfSprite *endsprite;
	sfSprite *finsp;
	sfSprite *logspr;
	sfSprite *rcpspr;
	sfMusic *music;
	sfClock *mv;
} Game_t;

typedef struct s_Ingbasics
{
	sfTexture *ingsh;
	sfSprite *ingspsh;
	sfVector2f screen_pos;
	sfIntRect menuing;
	int in;
} Ingbasics_t;

typedef struct s_Myrect
{
	sfIntRect menurect;
	sfIntRect pauserect;
	sfIntRect ingrect;
	sfIntRect finrect;
	sfIntRect logrect;
	sfIntRect rcprect;
} Myrect_t;

typedef struct s_Board
{
	sfText *time;
	sfText *dollars;
	sfText *ing;
	sfText *dollarst;
	sfFont *font;
	sfFont *fontt;
	sfClock *timer;
	char tim[6];
} Board_t;

typedef struct s_Recipes
{
	char **recipes;
	char **verify;
	int select_recipe;
} Recipes_t;

typedef struct s_CSFML
{
	sfRenderWindow *window;
	sfEvent event;
	sfTexture *cursor;
	sfSprite *cursorsp;
	Menu_t *menu;
	Basics_t *basic;
	Game_t *game;
	Board_t *board;
	Ingbasics_t *ingbasics[16];
	Myrect_t *myrect;
	Recipes_t *recipes;
} CSFML_t;

#endif /* STRUCT_H */
