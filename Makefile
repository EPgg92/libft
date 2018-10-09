
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
	srcs/mem/ft_bzero.o \
	srcs/conv/ft_tolower.o \
	srcs/conv/ft_toupper.o \
	srcs/display/ft_putchar.o \
	srcs/display/ft_putchar_fd.o \
	srcs/display/ft_putstr.o \
	srcs/display/ft_putstr_fd.o \
	srcs/str/ft_strnew.o \
	srcs/str/ft_strlen.o \
	srcs/str/ft_strclr.o \
	srcs/str/ft_strdel.o \
	srcs/str/ft_strcmp.o \
	srcs/str/ft_strncmp.o \
	srcs/str/ft_strchr.o \
	srcs/str/ft_strnequ.o \
	srcs/str/ft_strequ.o \
	srcs/str/ft_strcpy.o \
	srcs/str/ft_strrchr.o \
	srcs/str/ft_strdup.o \
	srcs/str/ft_strrev.o \
	srcs/str/ft_strnlen.o \
	srcs/str/ft_strncpy.o






all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	$(CC) $(CFLAGS) main.c $(NAME) # to remove

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all
