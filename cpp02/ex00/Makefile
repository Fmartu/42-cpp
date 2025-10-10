NAME = fixed
C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;33m-<>--<>--<>--<>--<>--<>--<>-\033[0m"
	@echo "\033[1;35mvi prego ponete fine alla mia \033[0m"
	@echo "\033[1;36msofferenza che sta roba mi ha \033[0m"
	@echo "\033[1;34mrovinato il mese :CCCCCCCCCCCCC\033[0m"
	@echo "\033[1;33m-<>--<>--<>--<>--<>--<>--<>-\033[0m"

all: $(NAME)

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
