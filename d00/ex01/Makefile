SRC = Contact.cpp main.cpp
NAME = phonebook_or_am_i
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

re: fclean $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

.PHONY: all re clean fclean
