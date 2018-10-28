
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc -g3

SOURCES = ft_atoi.c		\
	ft_bzero.c			\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isincharset.c	\
	ft_islower.c		\
	ft_isprint.c		\
	ft_isspace.c		\
	ft_isupper.c		\
	ft_itoa.c			\
	ft_lstadd.c			\
	ft_lstdel.c			\
	ft_lstdelone.c		\
	ft_lstiter.c		\
	ft_lstmap.c			\
	ft_lstnew.c			\
	ft_memalloc.c		\
	ft_memccpy.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memdel.c			\
	ft_memmove.c		\
	ft_memset.c			\
	ft_nbrlen.c			\
	ft_power.c			\
	ft_putchar.c		\
	ft_putchar_fd.c		\
	ft_putendl.c		\
	ft_putendl_fd.c		\
	ft_putnbr.c			\
	ft_putnbr_fd.c		\
	ft_putstr.c			\
	ft_putstr_fd.c		\
	ft_strcat.c			\
	ft_strchar.c		\
	ft_strchr.c			\
	ft_strclr.c			\
	ft_strcmp.c			\
	ft_strcpy.c			\
	ft_strcspn.c		\
	ft_strdel.c			\
	ft_strdup.c			\
	ft_strequ.c			\
	ft_striter.c		\
	ft_striteri.c		\
	ft_strjoin.c		\
	ft_strlcat.c		\
	ft_strlen.c			\
	ft_strmap.c			\
	ft_strmapi.c		\
	ft_strmtok.c		\
	ft_strncat.c		\
	ft_strncmp.c		\
	ft_strncpy.c		\
	ft_strnequ.c		\
	ft_strnew.c			\
	ft_strnlen.c		\
	ft_strnstr.c		\
	ft_strpbrk.c		\
	ft_strrchr.c		\
	ft_strreplace.c		\
	ft_strrev.c			\
	ft_strsep.c			\
	ft_strsplit.c		\
	ft_strspn.c			\
	ft_strstr.c			\
	ft_strsub.c			\
	ft_strtrim.c		\
	ft_strtrimcharset.c	\
	ft_tolower.c		\
	ft_max.c			\
	ft_abs.c			\
	ft_min.c			\
	ft_toupper.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@ ar rcus $(NAME) $(OBJECTS)
	@ echo "make done"

clean:
	@ rm -f $(OBJECTS)
	@ echo "clean objects"

fclean: clean
	@ rm -f $(NAME) a.out
	@ echo "clean bin"

re: fclean all

.PHONY: all clean fclean re
.SILENT: $(OBJECTS)
