CC = clang
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
NAME = libftprintf.a
SRC = \
ft_printf.c

// si hago el bonus hacer el bonus cache

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
