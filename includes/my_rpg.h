/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg
*/

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef MY_RPG_H_
    #define MY_RPG_H_

typedef struct clock_s {
    sfClock *ply_clock;
    sfTime ply_time;
    float ply_sec;
} cloc_t;

struct sprite_s {
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f vector;
    int len;
};
typedef struct sprite_s sprite_t;

typedef struct layer_s {
    int **nbr_layer;
} layer_t;

typedef struct nbr_layer_s {
    layer_t layer[3];
} nbr_layer_t;

typedef struct house_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    int nbr_house_display;
    nbr_layer_t nbr_house[5];
} house_t;

typedef struct one_ennemy_s {
    sprite_t ennemy;
    int attack;
    int walk;
    int deth;
    int hp;
    int damage;
    bool state;
} one_ennemy_t;

typedef struct ennemy_s {
    one_ennemy_t ennemy[3];
    cloc_t clock;
} ennemy_t;

typedef struct npc_s {
    sfRectangleShape *npc;
    sfTexture *npc_txt;
    sfVector2f npc_pos;
    sfVector2f npc_size;
    sfIntRect npc_rect;
} npc_t;

typedef struct button_s {
    sfRectangleShape *button;
    sfTexture *butt_txt;
    sfVector2f butt_size;
    sfVector2f butt_pos;
} button_t;

typedef struct music_s {
    sfMusic *music;
} music_t;

typedef struct map_s {
    sfSprite *map_sprite;
    sfTexture *map_texture;
    sfIntRect rect_map;
    int ***layer;
} map_t;

typedef struct choice_s{
    sfRectangleShape *arrow;
    sfRectangleShape *player;
    sfTexture *arrow_txt;
    sfTexture *player_txt;
    sfVector2f arrow_pos;
    sfVector2f player_pos;
} choice_t;

typedef struct manager_s {
    sfRenderWindow *window;
    sfEvent event;
    sfVideoMode mode;
} manager_t;

typedef struct background_s {
    sfSprite *sprite;
    sfTexture *tex;
} background_t;

typedef struct text_s {
    sfText *text;
    sfFont *font;
    sfVector2f text_pos;
} text_t;

typedef struct hud_s {
    sfRectangleShape *rect_hud;
    sfTexture *txt_hud;
    sfVector2f hud_size;
    sfVector2f hud_pos;
    sfIntRect hud_spt;
} hud_t;

typedef struct pause_s {
    sfRectangleShape *rect_pause;
    sfTexture *txt_pause;
    sfVector2f pause_size;
    sfVector2f pause_pos;
} pause_t;

typedef struct movement_s {
    sfBool up;
    sfBool down;
    sfBool left;
    sfBool right;
} movement_t;

typedef struct player_s {
    hud_t h[1];
    movement_t mov;
    sfRectangleShape *red_sqr;
    sfVector2f pos_red;
    sfRectangleShape *rect_play;
    sfTexture *txt_play;
    sfVector2f ply_size;
    sfVector2f ply_pos;
    sfIntRect ply_spt;
    sfVector2f vector;
    sfBool attack;
    int top;
    int direction;
    int ply_hp;
    int health_manage;
    long value;
    int damage;
} player_t;

typedef struct camera_s {
    sfView *cam;
} camera_t;

typedef struct chatbox_s {
    sfRectangleShape *chat_box;
    sfTexture *txt_cb;
    sfVector2f cb_size;
    sfVector2f cb_pos;
} chatbox_t;

typedef struct dialog_s {
    sfText *text;
    sfFont *font;
    sfVector2f text_pos;
} dialog_t;

typedef struct state_s {
    int state;
    int fps_state;
    int player;
    int npc_state;
    int npc_perso;
    int npc_quest;
} state_t;

typedef struct my_rpg_s {
    manager_t m;
    map_t map;
    house_t houses;
    ennemy_t ennemy;
    state_t s;
    background_t back[1];
    text_t text[4];
    text_t opt[5];
    text_t pause[3];
    camera_t cam[2];
    player_t p;
    cloc_t c[3];
    pause_t p_s[1];
    choice_t ch[3];
    npc_t n[10];
    button_t b[1];
    chatbox_t cb[2];
    dialog_t d[13];
    music_t mo[1];
} my_rpg_t;

void set_up_player(my_rpg_t *r);
void my_rpg(void);
void init_window(my_rpg_t *r);
my_rpg_t init_struct(void);
void init_back_text(my_rpg_t *r);
void pause_loop(my_rpg_t *r);
void pause_events(my_rpg_t *r);
void quit_game(my_rpg_t *r);
void init_pause_sprite(my_rpg_t *r);
void init_pause_text(my_rpg_t *r);
void init_all_arrow(my_rpg_t *r);
char *check_which_player(my_rpg_t *r);
void init_player_struct(my_rpg_t *rpg);
void init_player_texture(my_rpg_t *r);
void set_up_people(my_rpg_t *r);
void init_npc(my_rpg_t *r);
void init_clock(my_rpg_t *r);
void init_dog_npc(my_rpg_t *r);
void init_dog_master_npc(my_rpg_t *r);
void init_basic_npc(my_rpg_t *r);
void init_wife_npc(my_rpg_t *r);
void init_kid_npc(my_rpg_t *r);
void init_oldman_npc(my_rpg_t *r);
void display_interaction(my_rpg_t *r, int i);
void interaction(my_rpg_t *r);
void mayor_npc_loop(my_rpg_t *r);
void baby_npc_loop(my_rpg_t *r);
void mother_npc_loop(my_rpg_t *r);
void dog_npc_loop(my_rpg_t *r);
void dogmaster_npc_loop(my_rpg_t *r);
void mari_npc_loop(my_rpg_t *r);
void wife_npc_loop(my_rpg_t *r);
void kid_npc_loop(my_rpg_t *r);
void oldman_npc_loop(my_rpg_t *r);
void npc_events(my_rpg_t *r);
void npc_loop(my_rpg_t *r);
void init_chatbox(my_rpg_t *r);
void display_map(my_rpg_t *rpg);
void display_box(my_rpg_t *r);
void init_npc_text(my_rpg_t *r);
char *read_file(char *filepath);
void house_loop(my_rpg_t *r);
void ongoing_quest(my_rpg_t *r);
void quest_box(my_rpg_t *r);
void mother_first_text(my_rpg_t *r);
void mother_in_mission(my_rpg_t *r);
void mother_mission_finished(my_rpg_t *r);
void baby_in_mission(my_rpg_t *r);
void baby_first_text(my_rpg_t *r);
void house_zero(my_rpg_t *r);
void house_one(my_rpg_t *r);
void house_two(my_rpg_t *r);
void house_tree(my_rpg_t *r);
void house_four(my_rpg_t *r);
void girl_first_text(my_rpg_t *r);
void girl_in_mission(my_rpg_t *r);
void girl_mission_finished(my_rpg_t *r);
void dog_first_text(my_rpg_t *r);
void dog_mission_finished(my_rpg_t *r);
void reset_all(my_rpg_t *r);
void music(my_rpg_t *r);
void mayor_first_text(my_rpg_t *r);
void mayor_in_mission(my_rpg_t *r);
void mayor_second_text(my_rpg_t *r);
void which_player_chosed(my_rpg_t *r, int clicked);

#endif /* !MY_RPG_H_ */