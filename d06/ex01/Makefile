NAME = test

FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES =

SRC_FILE = test_main.cpp \
		   functions.cpp
#SRC = $(addprefix ./src/, $(SRC_FILE))

.PHONY = all clean fclean re

all : $(NAME)

$(NAME) :
	@echo "\tBuilding $(NAME) executable\n"
	clang++ $(FLAGS) $(INCLUDES) $(SRC_FILE) -o $(NAME)

clean :

fclean : clean
	rm $(NAME)

re : fclean all

r :
	rm $(NAME);
	make all
