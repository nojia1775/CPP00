CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = src/main.cpp \
       src/Contact.cpp \
       src/PhoneBook.cpp

OBJ_DIR = obj

OBJS = $(patsubst src/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

NAME = phonebook

$(OBJ_DIR)/%.o: src/%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
