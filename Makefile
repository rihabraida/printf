CFLAGS = -Wall -Wextra -Werror
CC = cc
CFILES = ft_printf.c ft_put_adr.c ft_puthex_num.c ft_putnbr.c ft_putstr.c ft_strchr.c
NAME = libftprintf.a
OFILES = $(CFILES:.c=.o)


all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES) 

fclean: clean
	rm -f $(NAME)

re: fclean all
