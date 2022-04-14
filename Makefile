CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_parse_format.c ft_printchar.c ft_printdec.c ft_printf.c ft_printptr.c ft_printstr.c ft_ultohex.c

LIB = libft/libft.a

HEADERS = ft_printf.h

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C libft
			ar -cr -L$(LIB) -lft $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
