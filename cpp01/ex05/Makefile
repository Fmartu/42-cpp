CXX := c++
LD := $(CXX)
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -g

NAME := KarenAtBurgerKing
SRC := main.cpp harl.cpp
OBJ := $(addprefix obj/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(LD) $^ -o $@

obj/%.o: ./%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf obj/

fclean: clean
	rm -rf $(NAME)

re: fclean
	@make --no-print-directory all

.PHONY: all clean fclean re
