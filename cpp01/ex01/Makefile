# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 00:37:23 by fmartusc          #+#    #+#              #
#    Updated: 2025/05/14 00:37:23 by fmartusc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde
C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp zombieHorde.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)
	@echo " ■ ▐ ▐▐ ▐▐   ■   ■  ■         ■ "
	@echo "■ █████████ ■  ▀   ▄  ■ ▀ ▄ ■   "
	@echo " ███▒█   \033[31m░░\033[0m█  ■ ■     ■      ▀  "
	@echo "█\033[31mΦ\033[0m  █   \033[31m░░Φ░\033[0m█  \033[34mBRAINSS (again)\033[0m ■ "
	@echo " ███▒█▄ \033[31m░░\033[0m▄█  \033[34m/\033[0m    ■      ▄     "
	@echo " ■ █▒▒██████ \033[34m/\033[0m   ████████    ▀ ■"
	@echo "▄ ▄█▒▒▒▒▒▒▒█   ██▒▓▓▓▓▓▓▓█  ■   "
	@echo "  █▒▐▒▒▒▒▒▒█ ██▒▒▒▓▓▓▓▓▓▓█   ▄  "
	@echo "■▄█▒▐▒▒▒▒▒▒██▒▒▒▓▓▓▓▓▓▓▓▓▓█    ■"
	@echo " █▒▒▒▒▒▒▒▒▒█▒▒▓▓█▒▒▒▒▓▓▓█▓█   ▀ "
	@echo "████████████▒▒▒▓█▒▒▒▒▓▓▓█▓▓█ ■  "
	@echo " ■    ■  █▒▒▒▒▒▓█▒▒▓▓▓▓▓█▓▓█  ■ "
	@echo "    ▀ ■  ████████▒▓▓▓▓▓▓▓████   "


%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
