NAME = megaphone

all: $(NAME)

$(NAME) :
	clang++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp -o $(NAME)

re: fclean $(NAME)

clean:
	rm -f megaphone

fclean: clean

.PHONY: all re clean fclean
