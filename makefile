NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRC = 

OBJ = $(SRC:.c=.o)

all: $(NAME)
	ar rcs $(NAME) $(OBJ)
%.o : %.
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re