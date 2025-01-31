
OBJ_DIR = objs
SRC_DIR = src
SRCS = src/Phonebook.cpp src/Contact.cpp src/main.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CC = g++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -Iincludes -std=c++98 -pedantic

NAME = phonny

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re