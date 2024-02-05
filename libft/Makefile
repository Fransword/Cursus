NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
CLEAN = rm -Rf
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_strchr.c
OBJS = $(SRC:.c=.o)
all: $(NAME)
$(NAME):$(OBJS)
    @ar rcs $(NAME) $(OBJS)
%.o:%.c
    @$(CC) $(CFLAGS) -c $< -o $@
clean:
    @$(CLEAN) ./*.o
fclean:
    @$(CLEAN) ./*.o
    @$(CLEAN) ./*.a
re: fclean all
.PHONY: all clean fclean re