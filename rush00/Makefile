NAME = ft_retro

FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = -I ./includes

LIBRARY = -lncurses
SRC_FILE = main.cpp \
			Game.cpp \
			Entities.cpp \
			player.cpp \
			Bullet.cpp \
			GenericEnemy.cpp
#SRC = $(addprefix ./src/, $(SRC_FILE))

.PHONY = all clean fclean re

all : $(NAME)

$(NAME) :
	@echo "\tBuilding $(NAME) executable\n"
	clang++ $(FLAGS) $(LIBRARY) $(INCLUDES) $(SRC_FILE) -o $(NAME)

clean :

fclean : clean
	rm $(NAME)

re : fclean all

r :
	rm $(NAME);
	make all
