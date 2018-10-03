
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -Iincludes

CC = gcc

OBJECTS = srcs/ft_isupper.o \
	srcs/ft_islower.o \
	srcs/ft_isalpha.o \
	srcs/ft_isdigit.o \
	srcs/ft_isalnum.o \
	srcs/ft_isascii.o \
	srcs/ft_isprint.o

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	$(CC) $(CFLAGS) main.c $(NAME) # to remove

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all
