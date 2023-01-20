SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

UNAME = $(shell uname -s)

ifeq ($(UNAME), Linux)
CPPFLAGS = -Wall -Wextra
$(warning Linux detected! Disabling -Werror and -std=c++98...)
endif

NAME = account

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re