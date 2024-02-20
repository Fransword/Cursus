NAME = libftprintf.a
SRCS			=	ft_found_bx.c ft_found_c.c ft_found_d.c ft_printf.c \
				ft_found_p.c ft_found_s.c ft_found_u.c ft_found_write.c \
				ft_found_x.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re