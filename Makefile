
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

OBJECTS = ft_atoi.o \
	ft_bzero.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_islower.o \
	ft_isprint.o \
	ft_isspace.o \
	ft_isupper.o \
	ft_itoa.o \
	ft_memalloc.o \
	ft_memccpy.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_memcpy.o \
	ft_memdel.o \
	ft_memmem.o \
	ft_memmove.o \
	ft_memset.o \
	ft_nbrlen.o \
	ft_power.o \
	ft_putchar.o \
	ft_putchar_fd.o \
	ft_putendl.o \
	ft_putendl_fd.o \
	ft_putnbr.o \
	ft_putnbr_fd.o \
	ft_putstr.o \
	ft_putstr_fd.o \
	ft_strcat.o \
	ft_strchr.o \
	ft_strclr.o \
	ft_strcmp.o \
	ft_strcpy.o \
	ft_strdel.o \
	ft_strdup.o \
	ft_strequ.o \
	ft_striter.o \
	ft_striteri.o \
	ft_strjoin.o \
	ft_strlcat.o \
	ft_strlen.o \
	ft_strmap.o \
	ft_strmapi.o \
	ft_strncat.o \
	ft_strncmp.o \
	ft_strncpy.o \
	ft_strnequ.o \
	ft_strnew.o \
	ft_strnlen.o \
	ft_strnstr.o \
	ft_strrchr.o \
	ft_strreplace.o \
	ft_strrev.o \
	ft_strsplit.o \
	ft_strstr.o \
	ft_strsub.o \
	ft_strtrim.o \
	ft_tolower.o \
	ft_toupper.o



all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	#$(CC) $(CFLAGS) main.c $(NAME) # to remove

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all
