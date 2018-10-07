
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -Iincludes

CC = gcc

OBJECTS = srcs/is/ft_isalnum.o \
	srcs/is/ft_isalpha.o \
	srcs/is/ft_isascii.o \
	srcs/is/ft_isdigit.o \
	srcs/is/ft_islower.o \
	srcs/is/ft_isprint.o \
	srcs/is/ft_isupper.o \
	srcs/mem/ft_memalloc.o \
	srcs/mem/ft_memccpy.o \
	srcs/mem/ft_memchr.o \
	srcs/mem/ft_memcmp.o \
	srcs/mem/ft_memcpy.o \
	srcs/mem/ft_memdel.o \
	srcs/mem/ft_memmove.o \
	srcs/mem/ft_memset.o \
	srcs/mem/ft_bzero.o

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	$(CC) $(CFLAGS) main.c $(NAME) # to remove

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all
