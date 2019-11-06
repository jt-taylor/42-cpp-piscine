# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 12:47:01 by viclucas          #+#    #+#              #
#    Updated: 2019/11/03 20:24:22 by viclucas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

FLAG = -Wall -Wextra -Werror

SRC = main.cpp \
	 	display/ncurses/init_ncurses_mode.cpp \
		display/IMonitorDisplay.cpp	\
		display/ncurses/printInfosOnScreen.cpp \
		modules/DateTimeModule.cpp \
		modules/HostNameModule.cpp\
		modules/IMonitorModule.cpp\
		modules/OsInfoModule.cpp\
		modules/CPUinfoModule.cpp \
		modules/NETWORKinfoModule.cpp\
		modules/RAMinfoModule.cpp\

OBJPATH = obj
SRCPATH = srcs

INCLUDES = -I includes/ -I SFML/include

LIBS = -framework sfml-graphics -framework sfml-window -framework sfml-system\
		-F SFML/Frameworks -lncurses

SRCS = $(addprefix $(SRCPATH)/,$(SRC))
OBJ = $(SRCS:$(SRCPATH)/%.cpp=$(OBJPATH)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAG) $(OBJ) -lncurses -o $(NAME)

$(OBJ): $(OBJPATH)/%.o : $(SRCPATH)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) -o $@ $(FLAG) $(INCLUDES) -c $<


nf: $(OBJ)
	clang++ $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
