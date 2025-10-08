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

NAME = fight
C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

PINK = \033[1;35m
BOH = \033[1;32m
RESET = \033[0m

$(NAME): $(OBJ)
	$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)
	@echo ""
	@echo "$(BOH)  HUMAN A               $(PINK)HUMAN B$(RESET)"
	@echo "$(BOH)(more armed) $(PINK)         (yolo kind)$(RESET)"
	@echo ""
	@echo "$(BOH)   ( •_•)                $(PINK)(👀 )$(RESET)"
	@echo "$(BOH)   ( ง )ง                $(PINK)୧( ୧ )$(RESET)"
	@echo " $(BOH)  /︶\                   $(PINK)|︶|$(RESET)"
	@echo ""

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
