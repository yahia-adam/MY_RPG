##
## EPITECH PROJECT, 2022
## rpg
## File description:
## Makefile
##

SRC		=	main.c	\
			src/rpg.c	\
			src/reset_all.c	\
			src/loop/check_loop.c	\
			src/loop/menu_loop.c	\
			src/loop/option_loop.c	\
			src/loop/game_loop.c	\
			src/loop/pause_loop.c	\
			src/loop/npc_loop.c	\
			src/loop/house_loop.c	\
			src/init/window.c	\
			src/init/music.c	\
			src/init/background.c	\
			src/init/pause_sprite.c	\
			src/init/choice_player.c	\
			src/init/npc/init_npc/init_npc1.c	\
			src/init/npc/init_npc/init_npc2.c	\
			src/init/npc/init_npc/init_npc3.c	\
			src/init/npc/clock_npc.c	\
			src/init/npc/interaction.c	\
			src/init/npc/chatbox.c	\
			src/init/npc/mayor_txt.c	\
			src/init/npc/mother_txt.c	\
			src/init/npc/baby_txt.c	\
			src/init/npc/little_girl_txt.c	\
			src/init/npc/dog_txt.c	\
			src/init/text/menu_text.c	\
			src/init/text/option_text/fps_text.c	\
			src/init/text/option_text/back_text.c	\
			src/init/text/pause_text/pause_text.c	\
			src/events/menu_events.c	\
			src/events/game/game_events.c	\
			src/events/game/npc/global_npc_events.c	\
			src/events/game/npc/npc_events_dog.c	\
			src/events/game/npc/npc_events_mayor.c	\
			src/events/game/npc/npc_events_dog_master.c	\
			src/events/game/npc/npc_events_other.c	\
			src/events/game/npc/npc_events_mother.c	\
			src/events/game/npc/npc_events_baby.c	\
			src/events/option_events.c	\
			src/events/option_events2.c	\
			src/events/pause_events.c	\
			src/init/player.c	\
			src/init/player_texture.c	\
			src/player/clock/movement_clock.c	\
			src/player/player_movement.c	\
			src/player/hud/game_hud.c \
			src/init/map/init_map.c	\
			src/init/map/read_file.c	\
			src/map/display_map.c	\
			src/init/ennemy/init_ennemy.c	\
			src/init/map/init_house.c	\
			src/map/display_house.c	\
			src/ennemy/animation.c	\
			src/map/check_house.c	\
			src/ennemy/tool_ennemy.c	\
			src/ennemy/distance.c	\
			src/ennemy/ennemy_interaction.c	\
			src/map/colision.c\
			src/map/colision_map.c\
			src/player/key_interaction.c	\
			src/player/fight/manage_fight.c	\
			src/player/fight/manage_hit.c	\
			src/init/npc/init_all_npc.c

OBJ		=	$(SRC:.c=.o)

EXEC	=	my_rpg

CFLAGS	=	-Wall -Wextra

CPPFLAGS =	-Llib -lmy -I includes

CSFML_FLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -lm

CC =	gcc

RM =	rm -f

all:	$(OBJ) build_lib
		$(CC) -o $(EXEC) $(OBJ) $(CSFML_FLAGS) $(CPPFLAGS) $(CFLAGS)

clean:
		$(RM) *.o

debug: CFLAGS += -g3
debug: re

fclean:	clean
		$(RM) $(OBJ)
		$(RM) $(EXEC)
		make fclean -C lib/

build_lib:	$(OBJ_LIB)
			make -C lib/

re:		fclean all

.PHONY: all clean debug fclean build_lib re
