# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 17:15:34 by fmartusc          #+#    #+#              #
#    Updated: 2025/05/14 17:15:34 by fmartusc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

PINK = \033[1;35m
BOH = \033[1;32m
RESET = \033[0m

$(NAME): $(OBJ)
	$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)
	@echo " | |"
	@echo " |=|"
	@echo "/   \\"
	@echo "|.--|"
	@echo "||  |"
	@echo "||  |    .    ' ."
	@echo "|'--|  '     \\~~~/"
	@echo "'-=-' \\~~~/   \\_/ <------ needing this soon"
	@echo "       \\_/     Y"
	@echo "        Y     _|_"
	@echo "       _|_"

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
