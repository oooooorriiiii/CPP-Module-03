CXX			:=	c++
CXXFLAGS	:=	-Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow

NAME	:=	ex03.out

SRCS	:=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

OBJS	:=	$(SRCS:.cpp=.o)

.PHONY:	all clean fclean re

.o: .cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all