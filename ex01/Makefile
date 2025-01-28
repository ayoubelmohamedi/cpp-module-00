
OBJ_DIR = objs
SRC_DIR = src
SRCS = src/Phonebook.cpp src/Contact.cpp src/main.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -Iincludes  #-std=c++97 -pedantic

NAME = phonny

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR) 
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re