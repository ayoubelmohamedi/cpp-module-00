

SRC = src/Phonebook.cpp src/Contact.cpp src/main.cpp
OBJ = $(SRC:dest/.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -Iincludes  #-std=c++97 -pedantic

NAME = phonny

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re