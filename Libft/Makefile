NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c \
       ft_isascii.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_tolower.c \
       ft_atoi.c \
       ft_isdigit.c \
       ft_memset.c \
       ft_strlen.c \
       ft_toupper.c \
       ft_bzero.c \
       ft_isprint.c \
       ft_strchr.c \
       ft_strncmp.c \
       ft_calloc.c \
       ft_memcher.c \
       ft_strdup.c \
       ft_strnstr.c \
       ft_isalnum.c \
       ft_memcmp.c \
       ft_strrchr.c \
       ft_isalpha.c \
       ft_memcpy.c \
       ft_strlcat.c \
       ft_substr.c

BONUS_SRCS = ft_bonus_function_bonus.c \
             ft_another_bonus_function_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
 ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
