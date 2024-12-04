NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 
CC = gcc

SRCS =  ft_printf.c ft_format.c ft_char_format.c \
		ft_hexadecimal_format.c ft_decimal_format.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re bonus
