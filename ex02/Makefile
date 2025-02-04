
OBJ_DIR = objs
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

CC = g++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -Iincludes -std=c++98 -pedantic

NAME = test

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
