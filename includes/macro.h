/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** macro
*/

#ifndef MACRO_H_
    #define MACRO_H_

    #define SUCCESS 1
    #define ERROR 0

static const int HOUSE_LINE = 11;
static const int HOUSE_COL = 20;
static const int MAP_LINE = 100;
static const int MAP_COL = 100;
static const int NBR_LAYER = 3;
static const int LEN_LAYER_NAME = 22;
static const int TAILES_SIZE = 48;
static const int HIGHT_SPRTE_MAP = 9;
static const int STEP_MOVE = 10;
static const int HALF_RECT = 60;
static const int WATER_TAILE = 18;
static const int HALF_TILED_SIZE = 40;
static const int NBR_HOUSE = 5;
static const int HIGHT_SPRTE_HOUSE = 32;
static const double T_PI = 3.1415926;

enum scenes {
    HOME,
    START,
    OPTION,
    GAME,
    PAUSE,
};

enum fps_event{
    FPS_30 = 1,
    FPS_60,
    FPS_120,
};

enum choice{
    CHOICE_1,
    CHOICE_2,
    CHOICE_3,
};

#endif /* !MACRO_H_ */
