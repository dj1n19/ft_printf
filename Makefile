CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_parse_format.c ft_printchar.c ft_printdec.c ft_printf.c ft_printptr.c ft_printstr.c ft_utohex.c ft_printudec.c ft_printhex.c

LIB_PATH = libft/

LIB = ft

DEP = libft.a

HEADERS_DIR = ./

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

.c.o:
				$(CC) $(CFLAGS) -c -I$(HEADERS_DIR) $< -o $(<:.c=.o)

all:		$(NAME)

$(DEP):
				make -C $(LIB_PATH)
				mv libft/$(DEP) $(NAME)
			

$(NAME):	$(DEP) $(OBJS)
				ar -crs $(NAME) $(OBJS)
				ranlib $(NAME)

clean:
				make fclean -C $(LIB_PATH)
				rm -f $(OBJS)

fclean:		clean
				rm -f $(LIB_PATH)$(DEP)
				rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
